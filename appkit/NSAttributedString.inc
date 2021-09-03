{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAttributedString.h }

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSParagraphStyleAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSForegroundColorAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSBackgroundColorAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLigatureAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSKernAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTrackingAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSStrikethroughStyleAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSUnderlineStyleAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSStrokeColorAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSStrokeWidthAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSShadowAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextEffectAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSAttachmentAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLinkAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSBaselineOffsetAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSUnderlineColorAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSStrikethroughColorAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSObliquenessAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExpansionAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSWritingDirectionAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSVerticalGlyphFormAttributeName: NSAttributedStringKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSCursorAttributeName: NSAttributedStringKey; cvar; external;
  NSToolTipAttributeName: NSAttributedStringKey; cvar; external;
  NSMarkedClauseSegmentAttributeName: NSAttributedStringKey; cvar; external;
  NSTextAlternativesAttributeName: NSAttributedStringKey { available in macos  }; cvar; external;
  NSSpellingStateAttributeName: NSAttributedStringKey; cvar; external;
  NSSuperscriptAttributeName: NSAttributedStringKey; cvar; external;
  NSGlyphInfoAttributeName: NSAttributedStringKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSUnderlineStyle = NSInteger;
  NSUnderlineStylePtr = ^NSUnderlineStyle;

const
  NSUnderlineStyleNone = $00;
  NSUnderlineStyleSingle = $01;
  NSUnderlineStyleThick = $02 { available in macos , ios , watchos , tvos  };
  NSUnderlineStyleDouble = $09 { available in macos , ios , watchos , tvos  };
  NSUnderlineStylePatternSolid = $0000 { available in macos , ios , watchos , tvos  };
  NSUnderlineStylePatternDot = $0100 { available in macos , ios , watchos , tvos  };
  NSUnderlineStylePatternDash = $0200 { available in macos , ios , watchos , tvos  };
  NSUnderlineStylePatternDashDot = $0300 { available in macos , ios , watchos , tvos  };
  NSUnderlineStylePatternDashDotDot = $0400 { available in macos , ios , watchos , tvos  };
  NSUnderlineStyleByWord = $8000 { available in macos , ios , watchos , tvos  };

type
  NSWritingDirectionFormatType = NSInteger;
  NSWritingDirectionFormatTypePtr = ^NSWritingDirectionFormatType;

const
  NSWritingDirectionEmbedding = 0 shl 1;
  NSWritingDirectionOverride = 1 shl 1;

type
  NSTextEffectStyle = NSString;
  NSTextEffectStylePtr = ^NSTextEffectStyle;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextEffectLetterpressStyle: NSTextEffectStyle { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSSpellingState = NSInteger;
  NSSpellingStatePtr = ^NSSpellingState;

const
  NSSpellingStateSpellingFlag = 1 shl 0 { available in macos  };
  NSSpellingStateGrammarFlag = 1 shl 1 { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringAttributeFixing = objccategory external (NSMutableAttributedString)
    procedure fixAttributesInRange (range: NSRange); message 'fixAttributesInRange:'; { available in macos , ios , watchos , tvos  }
    procedure fixFontAttributeInRange (range: NSRange); message 'fixFontAttributeInRange:';
    procedure fixParagraphStyleAttributeInRange (range: NSRange); message 'fixParagraphStyleAttributeInRange:';
    procedure fixAttachmentAttributeInRange (range: NSRange); message 'fixAttachmentAttributeInRange:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSAttributedStringDocumentType = NSString;
  NSAttributedStringDocumentTypePtr = ^NSAttributedStringDocumentType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPlainTextDocumentType: NSAttributedStringDocumentType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSRTFTextDocumentType: NSAttributedStringDocumentType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSRTFDTextDocumentType: NSAttributedStringDocumentType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHTMLTextDocumentType: NSAttributedStringDocumentType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSMacSimpleTextDocumentType: NSAttributedStringDocumentType; cvar; external;
  NSDocFormatTextDocumentType: NSAttributedStringDocumentType; cvar; external;
  NSWordMLTextDocumentType: NSAttributedStringDocumentType; cvar; external;
  NSWebArchiveTextDocumentType: NSAttributedStringDocumentType; cvar; external;
  NSOfficeOpenXMLTextDocumentType: NSAttributedStringDocumentType { available in macos  }; cvar; external;
  NSOpenDocumentTextDocumentType: NSAttributedStringDocumentType { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextLayoutSectionKey = NSString;
  NSTextLayoutSectionKeyPtr = ^NSTextLayoutSectionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextLayoutSectionOrientation: NSTextLayoutSectionKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextLayoutSectionRange: NSTextLayoutSectionKey { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextScalingType = NSInteger;
  NSTextScalingTypePtr = ^NSTextScalingType;

const
  NSTextScalingStandard = 0;
  NSTextScalingiOS = 1;

type
  NSAttributedStringDocumentAttributeKey = NSString;
  NSAttributedStringDocumentAttributeKeyPtr = ^NSAttributedStringDocumentAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDocumentTypeDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSConvertedDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSCocoaVersionDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSFileTypeDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos  }; cvar; external;
  NSTitleDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSCompanyDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSCopyrightDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSSubjectDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSAuthorDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSKeywordsDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSCommentDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSEditorDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSCreationTimeDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSModificationTimeDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSManagerDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos  }; cvar; external;
  NSCategoryDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos  }; cvar; external;
  NSAppearanceDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos  }; cvar; external;
  NSCharacterEncodingDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSDefaultAttributesDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPaperSizeDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLeftMarginDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSRightMarginDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSTopMarginDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSBottomMarginDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSViewSizeDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSViewZoomDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSViewModeDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSReadOnlyDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSBackgroundColorDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSHyphenationFactorDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSDefaultTabIntervalDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextLayoutSectionsAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExcludedElementsDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSTextEncodingNameDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSPrefixSpacesDocumentAttribute: NSAttributedStringDocumentAttributeKey; cvar; external;
  NSTextScalingDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios  }; cvar; external;
  NSSourceTextScalingDocumentAttribute: NSAttributedStringDocumentAttributeKey { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAttributedStringDocumentReadingOptionKey = NSString;
  NSAttributedStringDocumentReadingOptionKeyPtr = ^NSAttributedStringDocumentReadingOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDocumentTypeDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSDefaultAttributesDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSCharacterEncodingDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSTextEncodingNameDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSBaseURLDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSTimeoutDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSWebPreferencesDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSWebResourceLoadDelegateDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSTextSizeMultiplierDocumentOption: NSAttributedStringDocumentReadingOptionKey; cvar; external;
  NSFileTypeDocumentOption: NSAttributedStringDocumentReadingOptionKey { available in macos  }; cvar; external;
  NSTargetTextScalingDocumentOption: NSAttributedStringDocumentReadingOptionKey { available in macos , ios  }; cvar; external;
  NSSourceTextScalingDocumentOption: NSAttributedStringDocumentReadingOptionKey { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringDocumentFormats = objccategory external (NSAttributedString)
    function initWithURL_options_documentAttributes_error (url: NSURL; options: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): id; message 'initWithURL:options:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
    function initWithData_options_documentAttributes_error (data: NSData; options: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): id; message 'initWithData:options:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
    function dataFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): NSData; message 'dataFromRange:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
    function fileWrapperFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): NSFileWrapper; message 'fileWrapperFromRange:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
    function initWithRTF_documentAttributes (data: NSData; dict: NSDictionaryPtr): id; message 'initWithRTF:documentAttributes:';
    function initWithRTFD_documentAttributes (data: NSData; dict: NSDictionaryPtr): id; message 'initWithRTFD:documentAttributes:';
    function initWithHTML_documentAttributes (data: NSData; dict: NSDictionaryPtr): id; message 'initWithHTML:documentAttributes:';
    function initWithHTML_baseURL_documentAttributes (data: NSData; base: NSURL; dict: NSDictionaryPtr): id; message 'initWithHTML:baseURL:documentAttributes:';
    function initWithDocFormat_documentAttributes (data: NSData; dict: NSDictionaryPtr): id; message 'initWithDocFormat:documentAttributes:';
    function initWithHTML_options_documentAttributes (data: NSData; options: NSDictionary; dict: NSDictionaryPtr): id; message 'initWithHTML:options:documentAttributes:';
    function initWithRTFDFileWrapper_documentAttributes (wrapper: NSFileWrapper; dict: NSDictionaryPtr): id; message 'initWithRTFDFileWrapper:documentAttributes:';
    function RTFFromRange_documentAttributes (range: NSRange; dict: NSDictionary): NSData; message 'RTFFromRange:documentAttributes:';
    function RTFDFromRange_documentAttributes (range: NSRange; dict: NSDictionary): NSData; message 'RTFDFromRange:documentAttributes:';
    function RTFDFileWrapperFromRange_documentAttributes (range: NSRange; dict: NSDictionary): NSFileWrapper; message 'RTFDFileWrapperFromRange:documentAttributes:';
    function docFormatFromRange_documentAttributes (range: NSRange; dict: NSDictionary): NSData; message 'docFormatFromRange:documentAttributes:';
  end;

type
  NSMutableAttributedStringDocumentFormats = objccategory external (NSMutableAttributedString)
    function readFromURL_options_documentAttributes_error (url: NSURL; opts: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): objcbool; message 'readFromURL:options:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
    function readFromData_options_documentAttributes_error (data: NSData; opts: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): objcbool; message 'readFromData:options:documentAttributes:error:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSAttributedStringKitAdditions = objccategory external (NSAttributedString)
    function fontAttributesInRange (range: NSRange): NSDictionary; message 'fontAttributesInRange:';
    function rulerAttributesInRange (range: NSRange): NSDictionary; message 'rulerAttributesInRange:';
    function containsAttachmentsInRange (range: NSRange): objcbool; message 'containsAttachmentsInRange:'; { available in macos , ios , watchos , tvos  }
    function lineBreakBeforeIndex_withinRange (location: NSUInteger; aRange: NSRange): NSUInteger; message 'lineBreakBeforeIndex:withinRange:';
    function lineBreakByHyphenatingBeforeIndex_withinRange (location: NSUInteger; aRange: NSRange): NSUInteger; message 'lineBreakByHyphenatingBeforeIndex:withinRange:';
    function doubleClickAtIndex (location: NSUInteger): NSRange; message 'doubleClickAtIndex:';
    function nextWordFromIndex_forward (location: NSUInteger; isForward: objcbool): NSUInteger; message 'nextWordFromIndex:forward:';
    function rangeOfTextBlock_atIndex (block: NSTextBlock; location: NSUInteger): NSRange; message 'rangeOfTextBlock:atIndex:';
    function rangeOfTextTable_atIndex (table: NSTextTable; location: NSUInteger): NSRange; message 'rangeOfTextTable:atIndex:';
    function rangeOfTextList_atIndex (list: NSTextList; location: NSUInteger): NSRange; message 'rangeOfTextList:atIndex:';
    function itemNumberInTextList_atIndex (list: NSTextList; location: NSUInteger): NSInteger; message 'itemNumberInTextList:atIndex:';
  end;

type
  NSAttributedStringPasteboardAdditions = objccategory external (NSAttributedString)
    class function textTypes: NSArray; message 'textTypes'; { available in macos  }
    class function textUnfilteredTypes: NSArray; message 'textUnfilteredTypes'; { available in macos  }
  end;

type
  NSMutableAttributedStringKitAdditions = objccategory external (NSMutableAttributedString)
    procedure superscriptRange (range: NSRange); message 'superscriptRange:';
    procedure subscriptRange (range: NSRange); message 'subscriptRange:';
    procedure unscriptRange (range: NSRange); message 'unscriptRange:';
    procedure applyFontTraits_range (traitMask: NSFontTraitMask; range: NSRange); message 'applyFontTraits:range:';
    procedure setAlignment_range (alignment: NSTextAlignment; range: NSRange); message 'setAlignment:range:';
    procedure setBaseWritingDirection_range (writingDirection: NSWritingDirection; range: NSRange); message 'setBaseWritingDirection:range:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSUnderlinePatternSolid = NSUnderlineStylePatternSolid;
  NSUnderlinePatternDot = NSUnderlineStylePatternDot;
  NSUnderlinePatternDash = NSUnderlineStylePatternDash;
  NSUnderlinePatternDashDot = NSUnderlineStylePatternDashDot;
  NSUnderlinePatternDashDotDot = NSUnderlineStylePatternDashDotDot;
  NSUnderlineByWord = NSUnderlineStyleByWord;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCharacterShapeAttributeName: NSAttributedStringKey deprecated 'This attribute is bound to a specific implementation of ATS feature and not generically supported by wide range of fonts. The majority of characters accessed through this API are now encoded in the Unicode standard. Use the CTFont feature API for fine control over character shape choices.'; cvar; external;
  NSUsesScreenFontsDocumentAttribute: NSAttributedStringKey deprecated; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSNoUnderlineStyle = 0 deprecated 'Use NSUnderlineStyleNone instead';
  NSSingleUnderlineStyle = 1 deprecated 'Use NSUnderlineStyleSingle instead';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUnderlineStrikethroughMask: NSUInteger deprecated 'Use NSStrikethroughStyleAttributeName instead'; cvar; external;
  NSUnderlineByWordMask: NSUInteger deprecated 'Use NSUnderlineByWord instead'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedString_NSDeprecatedKitAdditions = objccategory external name 'NSDeprecatedKitAdditions' (NSAttributedString)
    function containsAttachments: objcbool; message 'containsAttachments';
    class function textFileTypes: NSArray; message 'textFileTypes'; deprecated;
    class function textPasteboardTypes: NSArray; message 'textPasteboardTypes'; deprecated;
    class function textUnfilteredFileTypes: NSArray; message 'textUnfilteredFileTypes'; deprecated;
    class function textUnfilteredPasteboardTypes: NSArray; message 'textUnfilteredPasteboardTypes'; deprecated;
    function initWithURL_documentAttributes (url: NSURL; dict: NSDictionaryPtr): id; message 'initWithURL:documentAttributes:'; deprecated 'Use -initWithURL:options:documentAttributes:error: instead';
    function initWithPath_documentAttributes (path: NSString; dict: NSDictionaryPtr): id; message 'initWithPath:documentAttributes:'; deprecated 'Use -initWithURL:options:documentAttributes:error: instead';
    function URLAtIndex_effectiveRange (location: NSUInteger; effectiveRange: NSRangePointer): NSURL; message 'URLAtIndex:effectiveRange:'; deprecated 'Use NSDataDetector instead';
  end;

type
  NSDeprecatedKitAdditions = objccategory external (NSMutableAttributedString)
    function readFromURL_options_documentAttributes (url: NSURL; options: NSDictionary; dict: NSDictionaryPtr): objcbool; message 'readFromURL:options:documentAttributes:'; deprecated 'Use -readFromURL:options:documentAttributes:error: instead';
    function readFromData_options_documentAttributes (data: NSData; options: NSDictionary; dict: NSDictionaryPtr): objcbool; message 'readFromData:options:documentAttributes:'; deprecated 'Use -readFromData:options:documentAttributes:error: instead';
  end;
{$endif}

{$endif}

{$else}
{$endif}