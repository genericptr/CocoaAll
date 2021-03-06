{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRAbsoluteTime.h }

{$ifndef SRAbsoluteTime_h}
{$ifdef TYPES}
type
  SRAbsoluteTime = CFTimeInterval { unavailable in watchos, macos) API_UNAVAILABLE(tvos };
  SRAbsoluteTimePtr = ^SRAbsoluteTime { unavailable in watchos, macos) API_UNAVAILABLE(tvos };
{$endif}

{$ifdef FUNCTIONS}
function SRAbsoluteTimeGetCurrent: SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos) API_UNAVAILABLE(tvos }
function SRAbsoluteTimeFromContinuousTime(cont: cuint64): SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos) API_UNAVAILABLE(tvos }
function SRAbsoluteTimeToCFAbsoluteTime(sr: SRAbsoluteTime): CFAbsoluteTime; cdecl; external; { unavailable in watchos, macos) API_UNAVAILABLE(tvos }
function SRAbsoluteTimeFromCFAbsoluteTime(cf: CFAbsoluteTime): SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos) API_UNAVAILABLE(tvos }
{$endif}

{$endif}
