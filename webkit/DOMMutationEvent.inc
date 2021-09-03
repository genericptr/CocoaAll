{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMMutationEvent.h }

{$ifdef TYPES}
type
  DOMMutationEventPtr = ^DOMMutationEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_MODIFICATION = 1;
  DOM_ADDITION = 2;
  DOM_REMOVAL = 3;
{$endif}

{$ifdef CLASSES}

type
  DOMMutationEvent = objcclass external (DOMEvent)
  public
    function relatedNode: DOMNode; message 'relatedNode';
    function prevValue: NSString; message 'prevValue';
    function newValue: NSString; message 'newValue';
    function newValue_: NSString; message 'newValue';
    function attrName: NSString; message 'attrName';
    function attrChange: cushort; message 'attrChange';
    procedure initMutationEvent_canBubble_cancelable_relatedNode_prevValue_newValue_attrName_attrChange (type_: NSString; canBubble: objcbool; cancelable_: objcbool; relatedNode_: DOMNode; prevValue_: NSString; newValue__: NSString; attrName_: NSString; attrChange_: cushort); message 'initMutationEvent:canBubble:cancelable:relatedNode:prevValue:newValue:attrName:attrChange:'; { available in 10_5 }
  end;


type
  DOMMutationEventDeprecated = objccategory external (DOMMutationEvent)
    procedure initMutationEvent_canBubble_relatedNode_newValue (type_: NSString; cancelable_: objcbool; prevValue_: NSString; attrName_: NSString); message 'initMutationEvent:canBubble:relatedNode:newValue:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}
