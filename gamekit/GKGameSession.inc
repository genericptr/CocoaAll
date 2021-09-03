{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKGameSession.h }

{$ifdef CALLBACKS}
type
  GKGameSessionCreateSessionInContainerCallback = reference to function (session: GKGameSession; error: NSError): pointer; cblock; cdecl;
  GKGameSessionLoadSessionsInContainerCallback = reference to function (sessions: NSArray; error: NSError): pointer; cblock; cdecl;
  GKGameSessionLoadSessionWithIdentifierCallback = reference to function (session: GKGameSession; error: NSError): pointer; cblock; cdecl;
  GKGameSessionRemoveSessionWithIdentifierCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKGameSessionGetShareURLWithCompletionHandlerCallback = reference to function (url: NSURL; error: NSError): pointer; cblock; cdecl;
  GKGameSessionLoadDataWithCompletionHandlerCallback = reference to function (data: NSData; error: NSError): pointer; cblock; cdecl;
  GKGameSessionSaveDataCallback = reference to function (conflictingData: NSData; error: NSError): pointer; cblock; cdecl;
  GKGameSessionSetConnectionStateCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKGameSessionSendDataCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKGameSessionSendMessageWithLocalizedFormatKeyCallback = reference to function (error: NSError): pointer; cblock; cdecl;
  GKGameSessionClearBadgeForPlayersCallback = reference to function (error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKGameSessionPtr = ^GKGameSession;
{$endif}

{$ifdef TYPES}
type
  GKConnectionState = NSInteger;
  GKConnectionStatePtr = ^GKConnectionState;

const
  GKConnectionStateNotConnected = 0;
  GKConnectionStateConnected = 1;

type
  GKTransportType = NSInteger;
  GKTransportTypePtr = ^GKTransportType;

const
  GKTransportTypeUnreliable = 0;
  GKTransportTypeReliable = 1;
{$endif}

{$ifdef CLASSES}

type
  GKGameSession = objcclass external (NSObject)
  private
    _identifier: NSString;
    _title: NSString;
    _owner: GKCloudPlayer;
    _players: NSArray;
    _lastModifiedDate: NSDate;
    _lastModifiedPlayer: GKCloudPlayer;
    _serverChangeTag: NSString;
    _maxNumberOfConnectedPlayers: NSInteger;
    _playerStates: NSMutableDictionary;
  public
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function owner: GKCloudPlayer; message 'owner';
    function players: NSArray; message 'players';
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    function lastModifiedPlayer: GKCloudPlayer; message 'lastModifiedPlayer';
    function maxNumberOfConnectedPlayers: NSInteger; message 'maxNumberOfConnectedPlayers';
    function badgedPlayers: NSArray; message 'badgedPlayers';
    class procedure createSessionInContainer_withTitle_maxConnectedPlayers_completionHandler (containerName: NSString; title_: NSString; maxPlayers: NSInteger; completionHandler: GKGameSessionCreateSessionInContainerCallback); message 'createSessionInContainer:withTitle:maxConnectedPlayers:completionHandler:';
    class procedure loadSessionsInContainer_completionHandler (containerName: NSString; completionHandler: GKGameSessionLoadSessionsInContainerCallback); message 'loadSessionsInContainer:completionHandler:';
    class procedure loadSessionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: GKGameSessionLoadSessionWithIdentifierCallback); message 'loadSessionWithIdentifier:completionHandler:';
    class procedure removeSessionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: GKGameSessionRemoveSessionWithIdentifierCallback); message 'removeSessionWithIdentifier:completionHandler:';
    procedure getShareURLWithCompletionHandler (completionHandler: GKGameSessionGetShareURLWithCompletionHandlerCallback); message 'getShareURLWithCompletionHandler:';
    procedure loadDataWithCompletionHandler (completionHandler: GKGameSessionLoadDataWithCompletionHandlerCallback); message 'loadDataWithCompletionHandler:';
    procedure saveData_completionHandler (data: NSData; completionHandler: GKGameSessionSaveDataCallback); message 'saveData:completionHandler:';
    procedure setConnectionState_completionHandler (state: GKConnectionState; completionHandler: GKGameSessionSetConnectionStateCallback); message 'setConnectionState:completionHandler:';
    function playersWithConnectionState (state: GKConnectionState): NSArray; message 'playersWithConnectionState:';
    procedure sendData_withTransportType_completionHandler (data: NSData; transport: GKTransportType; completionHandler: GKGameSessionSendDataCallback); message 'sendData:withTransportType:completionHandler:';
    procedure sendMessageWithLocalizedFormatKey_arguments_data_toPlayers_badgePlayers_completionHandler (key: NSString; arguments: NSArray; data: NSData; players_: NSArray; badgePlayers: objcbool; completionHandler: GKGameSessionSendMessageWithLocalizedFormatKeyCallback); message 'sendMessageWithLocalizedFormatKey:arguments:data:toPlayers:badgePlayers:completionHandler:';
    procedure clearBadgeForPlayers_completionHandler (players_: NSArray; completionHandler: GKGameSessionClearBadgeForPlayersCallback); message 'clearBadgeForPlayers:completionHandler:';
  end;
{$endif}
