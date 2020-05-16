
// Generated from tinyc.g4 by ANTLR 4.7.2

#pragma once


#include "/usr/include/antlr4-runtime/antlr4-runtime.h"
#include "tinycParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by tinycParser.
 */
class  tinycVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by tinycParser.
   */
    virtual antlrcpp::Any visitStart(tinycParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitProgram(tinycParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(tinycParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDecl(tinycParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitAssign(tinycParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitOut(tinycParser::OutContext *context) = 0;

    virtual antlrcpp::Any visitInput(tinycParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitBranch(tinycParser::BranchContext *context) = 0;

    virtual antlrcpp::Any visitLoop(tinycParser::LoopContext *context) = 0;

    virtual antlrcpp::Any visitExpr(tinycParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitGuard(tinycParser::GuardContext *context) = 0;

    virtual antlrcpp::Any visitRelation(tinycParser::RelationContext *context) = 0;


};

