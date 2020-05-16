
// Generated from tinyc.g4 by ANTLR 4.7.2


#include "tinycVisitor.h"

#include "tinycParser.h"


using namespace antlrcpp;
using namespace antlr4;

tinycParser::tinycParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

tinycParser::~tinycParser() {
  delete _interpreter;
}

std::string tinycParser::getGrammarFileName() const {
  return "tinyc.g4";
}

const std::vector<std::string>& tinycParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& tinycParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

tinycParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::ProgramContext* tinycParser::StartContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}

tree::TerminalNode* tinycParser::StartContext::EOF() {
  return getToken(tinycParser::EOF, 0);
}


size_t tinycParser::StartContext::getRuleIndex() const {
  return tinycParser::RuleStart;
}

antlrcpp::Any tinycParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::StartContext* tinycParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, tinycParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    program();
    setState(25);
    match(tinycParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

tinycParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::StatementContext* tinycParser::ProgramContext::statement() {
  return getRuleContext<tinycParser::StatementContext>(0);
}

tinycParser::ProgramContext* tinycParser::ProgramContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}


size_t tinycParser::ProgramContext::getRuleIndex() const {
  return tinycParser::RuleProgram;
}

antlrcpp::Any tinycParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::ProgramContext* tinycParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, tinycParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
      statement();
      setState(29);
      program();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

tinycParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::DeclContext* tinycParser::StatementContext::decl() {
  return getRuleContext<tinycParser::DeclContext>(0);
}

tinycParser::AssignContext* tinycParser::StatementContext::assign() {
  return getRuleContext<tinycParser::AssignContext>(0);
}

tinycParser::BranchContext* tinycParser::StatementContext::branch() {
  return getRuleContext<tinycParser::BranchContext>(0);
}

tinycParser::LoopContext* tinycParser::StatementContext::loop() {
  return getRuleContext<tinycParser::LoopContext>(0);
}

tinycParser::OutContext* tinycParser::StatementContext::out() {
  return getRuleContext<tinycParser::OutContext>(0);
}


size_t tinycParser::StatementContext::getRuleIndex() const {
  return tinycParser::RuleStatement;
}

antlrcpp::Any tinycParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::StatementContext* tinycParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, tinycParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(33);
        decl();
        setState(34);
        match(tinycParser::T__0);
        break;
      }

      case tinycParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(36);
        assign();
        setState(37);
        match(tinycParser::T__0);
        break;
      }

      case tinycParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(39);
        branch();
        break;
      }

      case tinycParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(40);
        loop();
        break;
      }

      case tinycParser::T__3: {
        enterOuterAlt(_localctx, 5);
        setState(41);
        out();
        setState(42);
        match(tinycParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

tinycParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::DeclContext::ID() {
  return getToken(tinycParser::ID, 0);
}


size_t tinycParser::DeclContext::getRuleIndex() const {
  return tinycParser::RuleDecl;
}

antlrcpp::Any tinycParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::DeclContext* tinycParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 6, tinycParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(tinycParser::T__1);
    setState(47);
    match(tinycParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

tinycParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::AssignContext::ID() {
  return getToken(tinycParser::ID, 0);
}

tinycParser::ExprContext* tinycParser::AssignContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}


size_t tinycParser::AssignContext::getRuleIndex() const {
  return tinycParser::RuleAssign;
}

antlrcpp::Any tinycParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::AssignContext* tinycParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 8, tinycParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(tinycParser::ID);
    setState(50);
    match(tinycParser::T__2);
    setState(51);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

tinycParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::ExprContext* tinycParser::OutContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}

tree::TerminalNode* tinycParser::OutContext::STRING() {
  return getToken(tinycParser::STRING, 0);
}


size_t tinycParser::OutContext::getRuleIndex() const {
  return tinycParser::RuleOut;
}

antlrcpp::Any tinycParser::OutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::OutContext* tinycParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 10, tinycParser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      match(tinycParser::T__3);
      setState(54);
      match(tinycParser::T__4);
      setState(55);
      expr(0);
      setState(56);
      match(tinycParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
      match(tinycParser::T__3);
      setState(59);
      match(tinycParser::T__4);
      setState(60);
      match(tinycParser::STRING);
      setState(61);
      match(tinycParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

tinycParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tinycParser::InputContext::getRuleIndex() const {
  return tinycParser::RuleInput;
}

antlrcpp::Any tinycParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::InputContext* tinycParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 12, tinycParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(tinycParser::T__6);
    setState(65);
    match(tinycParser::T__4);
    setState(66);
    match(tinycParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

tinycParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::GuardContext* tinycParser::BranchContext::guard() {
  return getRuleContext<tinycParser::GuardContext>(0);
}

std::vector<tinycParser::ProgramContext *> tinycParser::BranchContext::program() {
  return getRuleContexts<tinycParser::ProgramContext>();
}

tinycParser::ProgramContext* tinycParser::BranchContext::program(size_t i) {
  return getRuleContext<tinycParser::ProgramContext>(i);
}


size_t tinycParser::BranchContext::getRuleIndex() const {
  return tinycParser::RuleBranch;
}

antlrcpp::Any tinycParser::BranchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitBranch(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::BranchContext* tinycParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 14, tinycParser::RuleBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      match(tinycParser::T__7);
      setState(69);
      match(tinycParser::T__4);
      setState(70);
      guard(0);
      setState(71);
      match(tinycParser::T__5);
      setState(72);
      match(tinycParser::T__8);
      setState(73);
      program();
      setState(74);
      match(tinycParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(76);
      match(tinycParser::T__7);
      setState(77);
      match(tinycParser::T__4);
      setState(78);
      guard(0);
      setState(79);
      match(tinycParser::T__5);
      setState(80);
      match(tinycParser::T__8);
      setState(81);
      program();
      setState(82);
      match(tinycParser::T__9);
      setState(83);
      match(tinycParser::T__10);
      setState(84);
      match(tinycParser::T__8);
      setState(85);
      program();
      setState(86);
      match(tinycParser::T__9);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

tinycParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::GuardContext* tinycParser::LoopContext::guard() {
  return getRuleContext<tinycParser::GuardContext>(0);
}

tinycParser::ProgramContext* tinycParser::LoopContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}


size_t tinycParser::LoopContext::getRuleIndex() const {
  return tinycParser::RuleLoop;
}

antlrcpp::Any tinycParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::LoopContext* tinycParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 16, tinycParser::RuleLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(tinycParser::T__11);
    setState(91);
    match(tinycParser::T__4);
    setState(92);
    guard(0);
    setState(93);
    match(tinycParser::T__5);
    setState(94);
    match(tinycParser::T__8);
    setState(95);
    program();
    setState(96);
    match(tinycParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

tinycParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::ExprContext::NUMBER() {
  return getToken(tinycParser::NUMBER, 0);
}

tree::TerminalNode* tinycParser::ExprContext::ID() {
  return getToken(tinycParser::ID, 0);
}

tinycParser::InputContext* tinycParser::ExprContext::input() {
  return getRuleContext<tinycParser::InputContext>(0);
}

std::vector<tinycParser::ExprContext *> tinycParser::ExprContext::expr() {
  return getRuleContexts<tinycParser::ExprContext>();
}

tinycParser::ExprContext* tinycParser::ExprContext::expr(size_t i) {
  return getRuleContext<tinycParser::ExprContext>(i);
}

tree::TerminalNode* tinycParser::ExprContext::PLUS() {
  return getToken(tinycParser::PLUS, 0);
}

tree::TerminalNode* tinycParser::ExprContext::MINUS() {
  return getToken(tinycParser::MINUS, 0);
}

tree::TerminalNode* tinycParser::ExprContext::TIMES() {
  return getToken(tinycParser::TIMES, 0);
}

tree::TerminalNode* tinycParser::ExprContext::DIV() {
  return getToken(tinycParser::DIV, 0);
}

tree::TerminalNode* tinycParser::ExprContext::MOD() {
  return getToken(tinycParser::MOD, 0);
}


size_t tinycParser::ExprContext::getRuleIndex() const {
  return tinycParser::RuleExpr;
}

antlrcpp::Any tinycParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


tinycParser::ExprContext* tinycParser::expr() {
   return expr(0);
}

tinycParser::ExprContext* tinycParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinycParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  tinycParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, tinycParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::NUMBER: {
        setState(99);
        match(tinycParser::NUMBER);
        break;
      }

      case tinycParser::ID: {
        setState(100);
        match(tinycParser::ID);
        break;
      }

      case tinycParser::T__6: {
        setState(101);
        input();
        break;
      }

      case tinycParser::T__4: {
        setState(102);
        match(tinycParser::T__4);
        setState(103);
        expr(0);
        setState(104);
        match(tinycParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(123);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(108);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(109);
          match(tinycParser::PLUS);
          setState(110);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(111);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(112);
          match(tinycParser::MINUS);
          setState(113);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(114);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(115);
          match(tinycParser::TIMES);
          setState(116);
          expr(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(117);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(118);
          match(tinycParser::DIV);
          setState(119);
          expr(4);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(121);
          match(tinycParser::MOD);
          setState(122);
          expr(3);
          break;
        }

        } 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- GuardContext ------------------------------------------------------------------

tinycParser::GuardContext::GuardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::RelationContext* tinycParser::GuardContext::relation() {
  return getRuleContext<tinycParser::RelationContext>(0);
}

tree::TerminalNode* tinycParser::GuardContext::NOT() {
  return getToken(tinycParser::NOT, 0);
}

std::vector<tinycParser::GuardContext *> tinycParser::GuardContext::guard() {
  return getRuleContexts<tinycParser::GuardContext>();
}

tinycParser::GuardContext* tinycParser::GuardContext::guard(size_t i) {
  return getRuleContext<tinycParser::GuardContext>(i);
}

tree::TerminalNode* tinycParser::GuardContext::AND() {
  return getToken(tinycParser::AND, 0);
}

tree::TerminalNode* tinycParser::GuardContext::OR() {
  return getToken(tinycParser::OR, 0);
}


size_t tinycParser::GuardContext::getRuleIndex() const {
  return tinycParser::RuleGuard;
}

antlrcpp::Any tinycParser::GuardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitGuard(this);
  else
    return visitor->visitChildren(this);
}


tinycParser::GuardContext* tinycParser::guard() {
   return guard(0);
}

tinycParser::GuardContext* tinycParser::guard(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinycParser::GuardContext *_localctx = _tracker.createInstance<GuardContext>(_ctx, parentState);
  tinycParser::GuardContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, tinycParser::RuleGuard, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(129);
      relation();
      break;
    }

    case 2: {
      setState(130);
      match(tinycParser::NOT);
      setState(131);
      match(tinycParser::T__4);
      setState(132);
      guard(0);
      setState(133);
      match(tinycParser::T__5);
      break;
    }

    case 3: {
      setState(135);
      match(tinycParser::T__4);
      setState(136);
      guard(0);
      setState(137);
      match(tinycParser::T__5);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(149);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(147);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<GuardContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleGuard);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
          match(tinycParser::AND);
          setState(143);
          guard(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<GuardContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleGuard);
          setState(144);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(145);
          match(tinycParser::OR);
          setState(146);
          guard(3);
          break;
        }

        } 
      }
      setState(151);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

tinycParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tinycParser::ExprContext *> tinycParser::RelationContext::expr() {
  return getRuleContexts<tinycParser::ExprContext>();
}

tinycParser::ExprContext* tinycParser::RelationContext::expr(size_t i) {
  return getRuleContext<tinycParser::ExprContext>(i);
}

tree::TerminalNode* tinycParser::RelationContext::LT() {
  return getToken(tinycParser::LT, 0);
}

tree::TerminalNode* tinycParser::RelationContext::LEQ() {
  return getToken(tinycParser::LEQ, 0);
}

tree::TerminalNode* tinycParser::RelationContext::EQ() {
  return getToken(tinycParser::EQ, 0);
}

tree::TerminalNode* tinycParser::RelationContext::NEQ() {
  return getToken(tinycParser::NEQ, 0);
}

tree::TerminalNode* tinycParser::RelationContext::GEQ() {
  return getToken(tinycParser::GEQ, 0);
}

tree::TerminalNode* tinycParser::RelationContext::GT() {
  return getToken(tinycParser::GT, 0);
}


size_t tinycParser::RelationContext::getRuleIndex() const {
  return tinycParser::RuleRelation;
}

antlrcpp::Any tinycParser::RelationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tinycVisitor*>(visitor))
    return parserVisitor->visitRelation(this);
  else
    return visitor->visitChildren(this);
}

tinycParser::RelationContext* tinycParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 22, tinycParser::RuleRelation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      expr(0);
      setState(153);
      match(tinycParser::LT);
      setState(154);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(156);
      expr(0);
      setState(157);
      match(tinycParser::LEQ);
      setState(158);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(160);
      expr(0);
      setState(161);
      match(tinycParser::EQ);
      setState(162);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(164);
      expr(0);
      setState(165);
      match(tinycParser::NEQ);
      setState(166);
      expr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(168);
      expr(0);
      setState(169);
      match(tinycParser::GEQ);
      setState(170);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(172);
      expr(0);
      setState(173);
      match(tinycParser::GT);
      setState(174);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool tinycParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 10: return guardSempred(dynamic_cast<GuardContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tinycParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool tinycParser::guardSempred(GuardContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> tinycParser::_decisionToDFA;
atn::PredictionContextCache tinycParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN tinycParser::_atn;
std::vector<uint16_t> tinycParser::_serializedATN;

std::vector<std::string> tinycParser::_ruleNames = {
  "start", "program", "statement", "decl", "assign", "out", "input", "branch", 
  "loop", "expr", "guard", "relation"
};

std::vector<std::string> tinycParser::_literalNames = {
  "", "';'", "'int'", "'='", "'write'", "'('", "')'", "'read'", "'if'", 
  "'{'", "'}'", "'else'", "'while'", "'-'", "'+'", "'*'", "'/'", "'%'", 
  "'=='", "'<'", "'<='", "'>'", "'>='", "'!='", "'&&'", "'||'", "'!'"
};

std::vector<std::string> tinycParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "MINUS", "PLUS", "TIMES", 
  "DIV", "MOD", "EQ", "LT", "LEQ", "GT", "GEQ", "NEQ", "AND", "OR", "NOT", 
  "ID", "NUMBER", "STRING", "COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

dfa::Vocabulary tinycParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> tinycParser::_tokenNames;

tinycParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0xb5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x22, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2f, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x41, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x5b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6d, 0xa, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0x7e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x81, 0xb, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x8e, 0xa, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x96, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x99, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xb3, 0xa, 0xd, 0x3, 0xd, 0x2, 0x4, 0x14, 0x16, 0xe, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 
    0x2, 0x2, 0xc0, 0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0x40, 0x3, 0x2, 0x2, 0x2, 0xe, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0x4, 0x3, 
    0x2, 0x1b, 0x1c, 0x7, 0x2, 0x2, 0x3, 0x1c, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x22, 0x5, 0x6, 0x4, 0x2, 0x1e, 0x1f, 0x5, 0x6, 0x4, 0x2, 0x1f, 
    0x20, 0x5, 0x4, 0x3, 0x2, 0x20, 0x22, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x21, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 0x8, 0x5, 0x2, 0x24, 0x25, 0x7, 0x3, 
    0x2, 0x2, 0x25, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0xa, 0x6, 
    0x2, 0x27, 0x28, 0x7, 0x3, 0x2, 0x2, 0x28, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x2f, 0x5, 0x10, 0x9, 0x2, 0x2a, 0x2f, 0x5, 0x12, 0xa, 0x2, 0x2b, 
    0x2c, 0x5, 0xc, 0x7, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x31, 0x7, 0x4, 0x2, 0x2, 0x31, 0x32, 0x7, 0x1d, 0x2, 0x2, 
    0x32, 0x9, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x1d, 0x2, 0x2, 0x34, 
    0x35, 0x7, 0x5, 0x2, 0x2, 0x35, 0x36, 0x5, 0x14, 0xb, 0x2, 0x36, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0x6, 0x2, 0x2, 0x38, 0x39, 0x7, 
    0x7, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x14, 0xb, 0x2, 0x3a, 0x3b, 0x7, 0x8, 
    0x2, 0x2, 0x3b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x6, 0x2, 
    0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x1f, 0x2, 0x2, 
    0x3f, 0x41, 0x7, 0x8, 0x2, 0x2, 0x40, 0x37, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x41, 0xd, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 
    0x7, 0x9, 0x2, 0x2, 0x43, 0x44, 0x7, 0x7, 0x2, 0x2, 0x44, 0x45, 0x7, 
    0x8, 0x2, 0x2, 0x45, 0xf, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0xa, 
    0x2, 0x2, 0x47, 0x48, 0x7, 0x7, 0x2, 0x2, 0x48, 0x49, 0x5, 0x16, 0xc, 
    0x2, 0x49, 0x4a, 0x7, 0x8, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0xb, 0x2, 0x2, 
    0x4b, 0x4c, 0x5, 0x4, 0x3, 0x2, 0x4c, 0x4d, 0x7, 0xc, 0x2, 0x2, 0x4d, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0xa, 0x2, 0x2, 0x4f, 0x50, 
    0x7, 0x7, 0x2, 0x2, 0x50, 0x51, 0x5, 0x16, 0xc, 0x2, 0x51, 0x52, 0x7, 
    0x8, 0x2, 0x2, 0x52, 0x53, 0x7, 0xb, 0x2, 0x2, 0x53, 0x54, 0x5, 0x4, 
    0x3, 0x2, 0x54, 0x55, 0x7, 0xc, 0x2, 0x2, 0x55, 0x56, 0x7, 0xd, 0x2, 
    0x2, 0x56, 0x57, 0x7, 0xb, 0x2, 0x2, 0x57, 0x58, 0x5, 0x4, 0x3, 0x2, 
    0x58, 0x59, 0x7, 0xc, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xe, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
    0x7, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x16, 0xc, 0x2, 0x5f, 0x60, 0x7, 0x8, 
    0x2, 0x2, 0x60, 0x61, 0x7, 0xb, 0x2, 0x2, 0x61, 0x62, 0x5, 0x4, 0x3, 
    0x2, 0x62, 0x63, 0x7, 0xc, 0x2, 0x2, 0x63, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x8, 0xb, 0x1, 0x2, 0x65, 0x6d, 0x7, 0x1e, 0x2, 0x2, 0x66, 
    0x6d, 0x7, 0x1d, 0x2, 0x2, 0x67, 0x6d, 0x5, 0xe, 0x8, 0x2, 0x68, 0x69, 
    0x7, 0x7, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x14, 0xb, 0x2, 0x6a, 0x6b, 0x7, 
    0x8, 0x2, 0x2, 0x6b, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x6f, 0xc, 0x8, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x10, 0x2, 0x2, 0x70, 
    0x7e, 0x5, 0x14, 0xb, 0x9, 0x71, 0x72, 0xc, 0x7, 0x2, 0x2, 0x72, 0x73, 
    0x7, 0xf, 0x2, 0x2, 0x73, 0x7e, 0x5, 0x14, 0xb, 0x8, 0x74, 0x75, 0xc, 
    0x6, 0x2, 0x2, 0x75, 0x76, 0x7, 0x11, 0x2, 0x2, 0x76, 0x7e, 0x5, 0x14, 
    0xb, 0x7, 0x77, 0x78, 0xc, 0x5, 0x2, 0x2, 0x78, 0x79, 0x7, 0x12, 0x2, 
    0x2, 0x79, 0x7e, 0x5, 0x14, 0xb, 0x6, 0x7a, 0x7b, 0xc, 0x4, 0x2, 0x2, 
    0x7b, 0x7c, 0x7, 0x13, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x14, 0xb, 0x5, 0x7d, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x8, 0xc, 0x1, 0x2, 
    0x83, 0x8e, 0x5, 0x18, 0xd, 0x2, 0x84, 0x85, 0x7, 0x1c, 0x2, 0x2, 0x85, 
    0x86, 0x7, 0x7, 0x2, 0x2, 0x86, 0x87, 0x5, 0x16, 0xc, 0x2, 0x87, 0x88, 
    0x7, 0x8, 0x2, 0x2, 0x88, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 
    0x7, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x16, 0xc, 0x2, 0x8b, 0x8c, 0x7, 0x8, 
    0x2, 0x2, 0x8c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x84, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x97, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0xc, 0x5, 0x2, 0x2, 0x90, 
    0x91, 0x7, 0x1a, 0x2, 0x2, 0x91, 0x96, 0x5, 0x16, 0xc, 0x6, 0x92, 0x93, 
    0xc, 0x4, 0x2, 0x2, 0x93, 0x94, 0x7, 0x1b, 0x2, 0x2, 0x94, 0x96, 0x5, 
    0x16, 0xc, 0x5, 0x95, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x95, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x14, 0xb, 0x2, 0x9b, 
    0x9c, 0x7, 0x15, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x14, 0xb, 0x2, 0x9d, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x14, 0xb, 0x2, 0x9f, 0xa0, 0x7, 
    0x16, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x14, 0xb, 0x2, 0xa1, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x5, 0x14, 0xb, 0x2, 0xa3, 0xa4, 0x7, 0x14, 0x2, 
    0x2, 0xa4, 0xa5, 0x5, 0x14, 0xb, 0x2, 0xa5, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x5, 0x14, 0xb, 0x2, 0xa7, 0xa8, 0x7, 0x19, 0x2, 0x2, 0xa8, 
    0xa9, 0x5, 0x14, 0xb, 0x2, 0xa9, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 
    0x5, 0x14, 0xb, 0x2, 0xab, 0xac, 0x7, 0x18, 0x2, 0x2, 0xac, 0xad, 0x5, 
    0x14, 0xb, 0x2, 0xad, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x14, 
    0xb, 0x2, 0xaf, 0xb0, 0x7, 0x17, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x14, 0xb, 
    0x2, 0xb1, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd, 0x21, 0x2e, 
    0x40, 0x5a, 0x6c, 0x7d, 0x7f, 0x8d, 0x95, 0x97, 0xb2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

tinycParser::Initializer tinycParser::_init;
