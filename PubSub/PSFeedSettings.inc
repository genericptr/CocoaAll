{ Parsed from PubSub.framework PSFeedSettings.h }


{$ifdef TYPES}
type
  PSFeedSettingsPtr = ^PSFeedSettings;
{$endif}

{$if (MAC_OS_X_VERSION_10_5 <= MAC_OS_X_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
const
  PSFeedSettingsIntervalDefault = 0.0;
  PSFeedSettingsIntervalNever = -1.0;
  PSFeedSettingsUnlimitedSize = 0;
  PSFeedSettingsAllTypes = nil deprecated 'in 10_5, 10_9, NA, NA';
{$endif}

{$ifdef CLASSES}

type
  PSFeedSettings = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function defaultFeedSettings: PSFeedSettings; message 'defaultFeedSettings';
    class function defaultClientSettings: PSFeedSettings; message 'defaultClientSettings';
    procedure setRefreshInterval(newValue: NSTimeInterval); message 'setRefreshInterval:';
    function refreshInterval: NSTimeInterval; message 'refreshInterval';
    procedure setExpirationInterval(newValue: NSTimeInterval); message 'setExpirationInterval:';
    function expirationInterval: NSTimeInterval; message 'expirationInterval';
    procedure setRefreshesInBackground(newValue: objcbool); message 'setRefreshesInBackground:';
    function refreshesInBackground: objcbool; message 'refreshesInBackground';
    procedure setDownloadsEnclosures(newValue: objcbool); message 'setDownloadsEnclosures:';
    function downloadsEnclosures: objcbool; message 'downloadsEnclosures';
    procedure setMaxEnclosureSize(newValue: double); message 'setMaxEnclosureSize:';
    function maxEnclosureSize: double; message 'maxEnclosureSize';
    procedure setEnclosureTypes(newValue: NSArray); message 'setEnclosureTypes:';
    function enclosureTypes: NSArray; message 'enclosureTypes';
  end;
{$endif}

{$endif}
