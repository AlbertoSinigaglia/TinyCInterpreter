
// Generated from tinyc.g4 by ANTLR 4.7.2

#pragma once


#include "/usr/include/antlr4-runtime/antlr4-runtime.h"
#include "tinycVisitor.h"


/**
 * This class provides an empty implementation of tinycVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  tinycBaseVisitor : public tinycVisitor {
public:

  virtual antlrcpp::Any visitStart(tinycParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram(tinycParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(tinycParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(tinycParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(tinycParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut(tinycParser::OutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInput(tinycParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBranch(tinycParser::BranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop(tinycParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(tinycParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGuard(tinycParser::GuardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelation(tinycParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }


};

