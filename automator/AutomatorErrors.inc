{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AutomatorErrors.h }
{$ifdef TYPES}
const
  AMAutomatorErrorDomain = 'com.apple.Automator';
  AMActionErrorKey = 'AMActionErrorKey';

type
  AMErrorCode = NSInteger;
  AMErrorCodePtr = ^AMErrorCode;

const
  AMWorkflowNewerVersionError = -100;
  AMWorkflowPropertyListInvalidError = -101;
  AMWorkflowNewerActionVersionError = -111;
  AMWorkflowOlderActionVersionError = -112;
  AMWorkflowActionsNotLoadedError = -113;
  AMWorkflowNoEnabledActionsError = -114;
  AMUserCanceledError = -128;
  AMNoSuchActionError = -200;
  AMActionNotLoadableError = -201;
  AMActionArchitectureMismatchError = -202;
  AMActionRuntimeMismatchError = -203;
  AMActionLoadError = -204;
  AMActionLinkError = -205;
  AMActionApplicationResourceError = -206;
  AMActionApplicationVersionResourceError = -207;
  AMActionFileResourceError = -208;
  AMActionLicenseResourceError = -209;
  AMActionRequiredActionResourceError = -210;
  AMActionInitializationError = -211;
  AMActionExecutionError = -212;
  AMActionExceptionError = -213;
  AMActionPropertyListInvalidError = -214;
  AMActionInsufficientDataError = -215;
  AMActionIsDeprecatedError = -216;
  AMActionFailedGatekeeperError = -217;
  AMActionSignatureCorruptError = -218;
  AMActionQuarantineError = -219;
  AMActionXProtectError = -220;
  AMActionMalwareError = -221;
  AMActionThirdPartyActionsNotAllowedError = -222;
  AMActionXPCError = -223;
  AMConversionNotPossibleError = -300;
  AMConversionNoDataError = -301;
  AMConversionFailedError = -302;
{$endif}
