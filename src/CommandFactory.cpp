#include "CommandFactory.h"
#include "NullCommand.h"
#include "SocketCommand.h"
#include "Visit.h"
#include "Find.h"
#include "Reset.h"
#include "Node.h"
#include "Url.h"
#include "Source.h"
#include "Evaluate.h"
#include "Execute.h"
#include "FrameFocus.h"
#include "Header.h"
#include "Render.h"
#include "Body.h"
#include "Status.h"
#include "Headers.h"
#include "SetCookie.h"
#include "ClearCookies.h"
#include "GetCookies.h"
#include "SetProxy.h"
#include "ConsoleMessages.h"
#include "RequestedUrl.h"
#include "CurrentUrl.h"
#include "SetTimeout.h"
#include "GetTimeout.h"
#include "ResizeWindow.h"
#include "IgnoreSslErrors.h"
#include "SetSkipImageLoading.h"
#include "WindowFocus.h"
#include "GetWindowHandles.h"
#include "GetWindowHandle.h"
#include "WebPageManager.h"
#include "Authenticate.h"
#include "EnableLogging.h"
#include "SetConfirmAction.h"
#include "SetPromptAction.h"
#include "SetPromptText.h"
#include "ClearPromptText.h"
#include "JavascriptAlertMessages.h"
#include "JavascriptConfirmMessages.h"
#include "JavascriptPromptMessages.h"
#include "SetUrlBlacklist.h"

CommandFactory::CommandFactory(WebPageManager *manager, QObject *parent) : QObject(parent) {
  m_manager = manager;
}

Command *CommandFactory::createCommand(const char *name, QStringList &arguments) {
  #include "find_command.h"
  return new NullCommand(QString(name));
}
