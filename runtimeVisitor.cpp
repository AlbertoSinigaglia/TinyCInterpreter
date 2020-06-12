#include <iostream>
#include <string>
#include <exception>
#include "runtimeVisitor.h"

using namespace std;
 
antlrcpp::Any runtimeVisitor::visitDecl(tinycParser::DeclContext *ctx) {
    string varname = ctx->ID()->getText();
    this->vars[varname] = 0;
    return NULL;
}

antlrcpp::Any runtimeVisitor::visitAssign(tinycParser::AssignContext *ctx) {
    string varname = ctx->ID()->getText();
    int value = visitExpr(ctx->expr());
    this->vars[varname] = value;
    return NULL;
}

antlrcpp::Any runtimeVisitor::visitOut(tinycParser::OutContext *ctx) {
    // verifico se devo stampare intero o stringa
    if(ctx->expr() != NULL) {
        // caso stampa intero
        int value = visitExpr(ctx->expr());
        cout << value << endl;
    }
    else if(ctx->STRING() != NULL){
        string text = ctx->STRING()->getText();
        cout << text.substr(1, text.length()-2) <<endl;
    }
    return NULL;
}

antlrcpp::Any runtimeVisitor::visitInput(tinycParser::InputContext *ctx) {
    // il metodo deve ritornare un valore intero
    int value = 0;
    cin >> value;
    return value;
}


antlrcpp::Any runtimeVisitor::visitBranch(tinycParser::BranchContext *ctx) {
    // stabilisce il valore della guardia
    bool guard = visitGuard(ctx->guard());
    if(guard) {
        // se guardia vera, esegue ramo then
        visitProgram(ctx->program(0));
    } 
    else if(ctx->program(1)) {
        visitProgram(ctx->program(1));
    }
    return NULL;
}

antlrcpp::Any runtimeVisitor::visitLoop(tinycParser::LoopContext *ctx) {
    while(visitGuard(ctx->guard())){
        visitProgram(ctx->program());
    }
    return NULL;
}

antlrcpp::Any runtimeVisitor::visitExpr(tinycParser::ExprContext *ctx) {
    // controllo in quale caso sono
    int value = 0;
    if(ctx->ID() != NULL) {
        // caso ID
        string varname = ctx->ID()->getText();
        value = this->vars[varname];
    } else if(ctx->NUMBER() != NULL) {
        // caso NUMBER
        string numtext = ctx->NUMBER()->getText();
        value = std::stoi(numtext); 
    } else if(ctx->input() != NULL) {
        // caso input
        value = visitInput(ctx->input());
    } else if(ctx->PLUS() != NULL) {
        // caso expr + expr
        // calcolo il valore della prima expr
        int left = visitExpr(ctx->expr(0));
        // calcolo il valore della seconda expr
        int right = visitExpr(ctx->expr(1));
        // il risultato finale è la somma
        value = left + right;
    } else if(ctx->MINUS() != NULL) {
        // caso expr - expr
        // calcolo il valore della prima expr
        int left = visitExpr(ctx->expr(0));
        // calcolo il valore della seconda expr
        int right = visitExpr(ctx->expr(1));
        // il risultato finale è la differenza
        value = left - right;
    } else if(ctx->TIMES() != NULL) {
        // caso expr * expr
        // calcolo il valore della prima expr
        int left = visitExpr(ctx->expr(0));
        // calcolo il valore della seconda expr
        int right = visitExpr(ctx->expr(1));
        // il risultato finale è la moltiplicazione
        value = left * right;
    } else if(ctx->DIV() != NULL) {
        // caso expr / expr
        // calcolo il valore della prima expr
        int left = visitExpr(ctx->expr(0));
        // calcolo il valore della seconda expr
        int right = visitExpr(ctx->expr(1));
        // il risultato finale è la divisione
        value = left / right;
    } else if(ctx->MOD() != NULL) {
        // caso expr % expr
        // calcolo il valore della prima expr
        int left = visitExpr(ctx->expr(0));
        // calcolo il valore della seconda expr
        int right = visitExpr(ctx->expr(1));
        // il risultato finale è il modulo
        value = left % right;
    } else if(ctx->expr().size() == 1) {
        // caso parentesi
        value = visitExpr(ctx->expr(0));
    } 
    return value;
}

antlrcpp::Any runtimeVisitor::visitGuard(tinycParser::GuardContext *ctx) {
    // il metodo ritorna true se l'espressione è vera, false altrimenti
    if(ctx->NOT()) return ! visitGuard(ctx->guard(0)).as<bool>();
    else if(ctx->AND()) return visitGuard(ctx->guard(0)).as<bool>() && visitGuard(ctx->guard(1)).as<bool>();
    else if(ctx->OR()) return visitGuard(ctx->guard(0)).as<bool>() || visitGuard(ctx->guard(1)).as<bool>();
    else if(ctx->relation()) return visitRelation(ctx->relation()).as<bool>();
    else return visitGuard(ctx->guard(0)).as<bool>();
}

antlrcpp::Any runtimeVisitor::visitRelation(tinycParser::RelationContext *ctx) {
    // il metodo ritorna true se il confronto è vero, false altrimenti
    if(ctx->LT())       return visitExpr(ctx->expr(0)).as<int>() <  visitExpr(ctx->expr(1)).as<int>();
    else if(ctx->LEQ()) return visitExpr(ctx->expr(0)).as<int>() <= visitExpr(ctx->expr(1)).as<int>();
    else if(ctx->EQ())  return visitExpr(ctx->expr(0)).as<int>() == visitExpr(ctx->expr(1)).as<int>();
    else if(ctx->NEQ()) return visitExpr(ctx->expr(0)).as<int>() != visitExpr(ctx->expr(1)).as<int>();
    else if(ctx->GEQ()) return visitExpr(ctx->expr(0)).as<int>() >= visitExpr(ctx->expr(1)).as<int>();
    else if(ctx->GT())  return visitExpr(ctx->expr(0)).as<int>() >  visitExpr(ctx->expr(1)).as<int>();
    return false;
}

