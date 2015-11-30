#include <iostream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include <Wt/WApplication>
#include <Wt/WEnvironment>
#include <Wt/WText>

#include "wtautoconfig.h"
#include "wtbroadcastserver.h"
#include "testbroadcastserverwtmenudialog.h"
#pragma GCC diagnostic pop

struct WtApplication : public Wt::WApplication
{
  WtApplication(const Wt::WEnvironment& env)
  : WApplication(env)
  {
    setTitle("TestBroadcastServer");
    this->useStyleSheet("wt.css");
    root()->addWidget(new ribi::ToolTestBroadcastServer::WtMenuDialog);
  }
};

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
  return new WtApplication(env);
}

int main(int argc, char **argv)
{
  ribi::WtAutoConfig::SaveDefaultStylesheet();
  ribi::WtAutoConfig a(argc,argv,createApplication);
  return a.Run();
}

