{ Parsed from OSAKit.framework OSAScriptView.h }


{$ifdef TYPES}
type
  OSAScriptViewPtr = ^OSAScriptView;
{$endif}

{$ifdef CLASSES}

type
  OSAScriptView = objcclass external (NSTextView)
  private
    _private: OSAScriptViewPrivate;
  public
    procedure setSource(newValue: NSString); message 'setSource:';
    function source: NSString; message 'source';
    procedure setUsesScriptAssistant(newValue: objcbool); message 'setUsesScriptAssistant:';
    function usesScriptAssistant: objcbool; message 'usesScriptAssistant';
    procedure setUsesTabs(newValue: objcbool); message 'setUsesTabs:';
    function usesTabs: objcbool; message 'usesTabs';
    procedure setTabWidth(newValue: NSUInteger); message 'setTabWidth:';
    function tabWidth: NSUInteger; message 'tabWidth';
    procedure setWrapsLines(newValue: objcbool); message 'setWrapsLines:';
    function wrapsLines: objcbool; message 'wrapsLines';
    procedure setIndentsWrappedLines(newValue: objcbool); message 'setIndentsWrappedLines:';
    function indentsWrappedLines: objcbool; message 'indentsWrappedLines';
    procedure setIndentWidth(newValue: NSUInteger); message 'setIndentWidth:';
    function indentWidth: NSUInteger; message 'indentWidth';
  end;
{$endif}

