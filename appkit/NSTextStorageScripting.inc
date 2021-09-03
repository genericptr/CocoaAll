{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextStorageScripting.h }

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  Scripting = objccategory external (NSTextStorage)
    procedure setAttributeRuns(newValue: NSArray); message 'setAttributeRuns:';
    function attributeRuns: NSArray; message 'attributeRuns';
    procedure setParagraphs(newValue: NSArray); message 'setParagraphs:';
    function paragraphs: NSArray; message 'paragraphs';
    procedure setWords(newValue: NSArray); message 'setWords:';
    function words: NSArray; message 'words';
    procedure setCharacters(newValue: NSArray); message 'setCharacters:';
    function characters: NSArray; message 'characters';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setForegroundColor(newValue: NSColor); message 'setForegroundColor:';
    function foregroundColor: NSColor; message 'foregroundColor';
  end;
{$endif}

{$endif}