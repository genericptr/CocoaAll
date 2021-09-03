{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCSSRule.h }

{$ifdef TYPES}
type
  DOMCSSRulePtr = ^DOMCSSRule;
{$endif}

{$ifdef TYPES}
const
  DOM_UNKNOWN_RULE = 0;
  DOM_STYLE_RULE = 1;
  DOM_CHARSET_RULE = 2;
  DOM_IMPORT_RULE = 3;
  DOM_MEDIA_RULE = 4;
  DOM_FONT_FACE_RULE = 5;
  DOM_PAGE_RULE = 6;
  DOM_KEYFRAMES_RULE = 7;
  DOM_KEYFRAME_RULE = 8;
  DOM_NAMESPACE_RULE = 10;
  DOM_SUPPORTS_RULE = 12;
  DOM_WEBKIT_REGION_RULE = 16;
  DOM_WEBKIT_KEYFRAMES_RULE = 7;
  DOM_WEBKIT_KEYFRAME_RULE = 8;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSRule = objcclass external (DOMObject)
  public
    function type_: cushort; message 'type';
    procedure setCssText(newValue: NSString); message 'setCssText:';
    function cssText: NSString; message 'cssText';
    function parentStyleSheet: DOMCSSStyleSheet; message 'parentStyleSheet';
    function parentRule: DOMCSSRule; message 'parentRule';
  end;
{$endif}
