{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXCrashDiagnostic.h }

{$ifdef TYPES}
type
  MXCrashDiagnosticPtr = ^MXCrashDiagnostic;
{$endif}

{$ifdef CLASSES}

type
  MXCrashDiagnostic = objcclass external (MXDiagnostic)
  public
    function callStackTree: MXCallStackTree; message 'callStackTree';
    function terminationReason: NSString; message 'terminationReason';
    function virtualMemoryRegionInfo: NSString; message 'virtualMemoryRegionInfo';
    function exceptionType: NSNumber; message 'exceptionType';
    function exceptionCode: NSNumber; message 'exceptionCode';
    function signal: NSNumber; message 'signal';
  end;
{$endif}
