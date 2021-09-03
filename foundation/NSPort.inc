{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSPort.h }

{ Types from NSPort }
{$ifdef TYPES}

{$endif}


{ Types from NSMachPort }
{$ifdef TYPES}

type
  NSMachPortOptions = NSUInteger;
type
  NSMachPortOptionsPtr = ^NSMachPortOptions;

const
  NSMachPortDeallocateNone = 0;
  NSMachPortDeallocateSendRight = 1 shl 0;
  NSMachPortDeallocateReceiveRight = 1 shl 1;
{$endif}


{$ifdef TYPES}
type
  NSPortPtr = ^NSPort;
  NSMachPortPtr = ^NSMachPort;
  NSMessagePortPtr = ^NSMessagePort;
  NSSocketPortPtr = ^NSSocketPort;
  NSPortDelegateProtocolPtr = ^NSPortDelegateProtocol;
  NSMachPortDelegateProtocolPtr = ^NSMachPortDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSocketNativeHandle = cint;
  NSSocketNativeHandlePtr = ^NSSocketNativeHandle;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPortDidBecomeInvalidNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPort = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function port: NSPort; message 'port';
    procedure invalidate; message 'invalidate';
    function isValid: objcbool; message 'isValid';
    procedure setDelegate (anObject: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure scheduleInRunLoop_forMode (runLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (runLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    function reservedSpaceLength: NSUInteger; message 'reservedSpaceLength';
    function sendBeforeDate_components_from_reserved (limitDate: NSDate; components: NSMutableArray; receivePort: NSPort; headerSpaceReserved: NSUInteger): objcbool; message 'sendBeforeDate:components:from:reserved:';
    function sendBeforeDate_msgid_components_from_reserved (limitDate: NSDate; msgID: NSUInteger; components: NSMutableArray; receivePort: NSPort; headerSpaceReserved: NSUInteger): objcbool; message 'sendBeforeDate:msgid:components:from:reserved:';
    {$if defined(TARGET_OS_OSX) or defined(TARGET_OS_MACCATALYST)}
    procedure addConnection_toRunLoop_forMode (conn: NSConnection; runLoop: NSRunLoop; mode: NSRunLoopMode); message 'addConnection:toRunLoop:forMode:';
    procedure removeConnection_fromRunLoop_forMode (conn: NSConnection; runLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeConnection:fromRunLoop:forMode:';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPortDelegateProtocol = objcprotocol external name 'NSPortDelegate' (NSObjectProtocol)
  optional
    procedure handlePortMessage (message_: NSPortMessage); message 'handlePortMessage:';
  end;
{$endif}

{$if defined(TARGET_OS_OSX) or defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSMachPort = objcclass external (NSPort)
  private
    _delegate: id;
    _flags: NSUInteger;
    _machPort: cuint32;
    _reserved: NSUInteger;
  public
    class function portWithMachPort (machPort: cuint32): NSPort; message 'portWithMachPort:';
    function initWithMachPort (machPort: cuint32): id; message 'initWithMachPort:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate (anObject: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    class function portWithMachPort_options (machPort: cuint32; f: NSMachPortOptions): NSPort; message 'portWithMachPort:options:'; { available in macos , ios , watchos , tvos  }
    function initWithMachPort_options (machPort: cuint32; f: NSMachPortOptions): id; message 'initWithMachPort:options:'; { available in macos , ios , watchos , tvos  }
    function machPort: cuint32; message 'machPort';
    procedure scheduleInRunLoop_forMode (runLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (runLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSMachPortDelegateProtocol = objcprotocol external name 'NSMachPortDelegate' (NSPortDelegateProtocol)
  optional
    procedure handleMachMessage (msg: pointer); message 'handleMachMessage:';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSMessagePort = objcclass external (NSPort)
  private
    _port: pointer;
    _delegate: id;
  end;
{$endif}

{$if defined(TARGET_OS_OSX) or defined(TARGET_IPHONE_SIMULATOR)}
{$ifdef CLASSES}

type
  NSSocketPort = objcclass external (NSPort)
  private
    _receiver: pointer;
    _connectors: id;
    _loops: pointer;
    _data: pointer;
    _signature: id;
    _delegate: id;
    _lock: id;
    _maxSize: NSUInteger;
    _useCount: NSUInteger;
    _reserved: NSUInteger;
  public
    function init: id; message 'init';
    function initWithTCPPort (port_: cushort): id; message 'initWithTCPPort:';
    function initWithProtocolFamily_socketType_protocol_address (family: cint; type_: cint; protocol: cint; address: NSData): id; message 'initWithProtocolFamily:socketType:protocol:address:'; { NS_DESIGNATED_INITIALIZER }
    function initWithProtocolFamily_socketType_protocol_socket (family: cint; type_: cint; protocol: cint; sock: NSSocketNativeHandle): id; message 'initWithProtocolFamily:socketType:protocol:socket:'; { NS_DESIGNATED_INITIALIZER }
    function initRemoteWithTCPPort_host (port_: cushort; hostName: NSString): id; message 'initRemoteWithTCPPort:host:';
    function initRemoteWithProtocolFamily_socketType_protocol_address (family: cint; type_: cint; protocol: cint; address: NSData): id; message 'initRemoteWithProtocolFamily:socketType:protocol:address:'; { NS_DESIGNATED_INITIALIZER }
    function protocolFamily: cint; message 'protocolFamily';
    function socketType: cint; message 'socketType';
    function protocol: cint; message 'protocol';
    function address: NSData; message 'address';
    function socket: NSSocketNativeHandle; message 'socket';
  end;
{$endif}

{$endif}