{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKServerChangeToken.h }

{$ifdef TYPES}
type
  CKServerChangeTokenPtr = ^CKServerChangeToken;
{$endif}

{$ifdef CLASSES}

type
  CKServerChangeToken = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}
