#pragma once

#include "/usr/include/antlr4-runtime/antlr4-runtime.h"
#include "tinycVisitor.h"
#include "tinycBaseVisitor.h"


/**
 * This class provides a concrete visitor which only needs to handle a subset of the available methods.
 */
class  runtimeVisitor : public tinycBaseVisitor {
protected:
    std::map<std::string,int> vars;
    
public:

  antlrcpp::Any visitDecl(tinycParser::DeclContext *ctx);

  antlrcpp::Any visitAssign(tinycParser::AssignContext *ctx);

  antlrcpp::Any visitOut(tinycParser::OutContext *ctx);

  antlrcpp::Any visitInput(tinycParser::InputContext *ctx);

  antlrcpp::Any visitBranch(tinycParser::BranchContext *ctx);

  antlrcpp::Any visitLoop(tinycParser::LoopContext *ctx);

  antlrcpp::Any visitExpr(tinycParser::ExprContext *ctx);

  antlrcpp::Any visitGuard(tinycParser::GuardContext *ctx);

  antlrcpp::Any visitRelation(tinycParser::RelationContext *ctx);

};

