{ Parsed from SecurityInterface.framework SFAuthorizationView.h }


{$ifdef TYPES}
type
  SFAuthorizationViewPtr = ^SFAuthorizationView;
{$endif}

{$ifndef _SFAUTHORIZATIONVIEW_H_}
{$ifdef TYPES}
const
  SFAuthorizationStartupState = 0;
  SFAuthorizationViewLockedState = 1;
  SFAuthorizationViewInProgressState = 2;
  SFAuthorizationViewUnlockedState = 3;
type
  SFAuthorizationViewState = clong;
{$endif}

{$ifdef CLASSES}

type
  SFAuthorizationView = objcclass external (NSView)
  private
    {$if (defined(__LP64__))}
    _reserved_SFAuthorizationView: id;
    {$else}
    _button: SFAnimatedLockButton;
    _textButton: NSButton;
    _authorizationRights: AuthorizationRightsPtr;
    _authorization: SFAuthorization;
    _delegate: id;
    _currentState: SFAuthorizationViewState;
    _authorized: objcbool;
    _timeInterval: NSTimeInterval;
    _flags: AuthorizationFlags;
    _privateData: id;
    {$endif}
  public
    procedure setString (authorizationString_: AuthorizationString); message 'setString:';
    procedure setAuthorizationRights (authorizationRights: AuthorizationRightsPtr); message 'setAuthorizationRights:';
    function authorizationRights: AuthorizationRightsPtr; message 'authorizationRights';
    function authorization: SFAuthorization; message 'authorization';
    function updateStatus (inSender: id): objcbool; message 'updateStatus:';
    procedure setAutoupdate (autoupdate: objcbool); message 'setAutoupdate:';
    procedure setAutoupdate_interval (autoupdate: objcbool; interval: NSTimeInterval); message 'setAutoupdate:interval:';
    function authorizationState: SFAuthorizationViewState; message 'authorizationState';
    procedure setEnabled (enabled: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setFlags (flags: AuthorizationFlags); message 'setFlags:';
    procedure setDelegate (delegate: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function authorize (inSender: id): objcbool; message 'authorize:';
    function deauthorize (inSender: id): objcbool; message 'deauthorize:';
  end;


type
  NSObject_SFAuthorizationViewDelegate = objccategory external name 'SFAuthorizationViewDelegate' (NSObject)
    procedure authorizationViewDidAuthorize (view: SFAuthorizationView); message 'authorizationViewDidAuthorize:';
    procedure authorizationViewDidDeauthorize (view: SFAuthorizationView); message 'authorizationViewDidDeauthorize:';
    function authorizationViewShouldDeauthorize (view: SFAuthorizationView): objcbool; message 'authorizationViewShouldDeauthorize:';
    procedure authorizationViewCreatedAuthorization (view: SFAuthorizationView); message 'authorizationViewCreatedAuthorization:';
    procedure authorizationViewReleasedAuthorization (view: SFAuthorizationView); message 'authorizationViewReleasedAuthorization:';
    procedure authorizationViewDidHide (view: SFAuthorizationView); message 'authorizationViewDidHide:';
  end;
{$endif}

{$endif}
