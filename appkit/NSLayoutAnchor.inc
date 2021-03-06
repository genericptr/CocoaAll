{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSLayoutAnchor.h }

{ Types from NSLayoutAnchor }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSLayoutAnchorPtr = ^NSLayoutAnchor;
  NSLayoutXAxisAnchorPtr = ^NSLayoutXAxisAnchor;
  NSLayoutYAxisAnchorPtr = ^NSLayoutYAxisAnchor;
  NSLayoutDimensionPtr = ^NSLayoutDimension;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}

{$ifdef CLASSES}

type
  NSLayoutAnchor = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function constraintEqualToAnchor (anchor: NSLayoutAnchor): NSLayoutConstraint; message 'constraintEqualToAnchor:';
    function constraintGreaterThanOrEqualToAnchor (anchor: NSLayoutAnchor): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:';
    function constraintLessThanOrEqualToAnchor (anchor: NSLayoutAnchor): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:';
    function constraintEqualToAnchor_constant (anchor: NSLayoutAnchor; c: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:constant:';
    function constraintGreaterThanOrEqualToAnchor_constant (anchor: NSLayoutAnchor; c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:constant:';
    function constraintLessThanOrEqualToAnchor_constant (anchor: NSLayoutAnchor; c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:constant:';
    function name: NSString; message 'name'; { unavailable in ios, watchos, tvos }
    function item: id; message 'item'; { unavailable in ios, watchos, tvos }
    function hasAmbiguousLayout: objcbool; message 'hasAmbiguousLayout'; { unavailable in ios, watchos, tvos }
    function constraintsAffectingLayout: NSArray; message 'constraintsAffectingLayout'; { unavailable in ios, watchos, tvos }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;

type
  NSLayoutXAxisAnchor = objcclass external (NSLayoutAnchor)
  public
    function anchorWithOffsetToAnchor (otherAnchor: NSLayoutXAxisAnchor): NSLayoutDimension; message 'anchorWithOffsetToAnchor:'; { available in macos , ios , tvos  }
    function constraintEqualToSystemSpacingAfterAnchor_multiplier (anchor: NSLayoutXAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintEqualToSystemSpacingAfterAnchor:multiplier:'; { available in macos , ios , tvos  }
    function constraintGreaterThanOrEqualToSystemSpacingAfterAnchor_multiplier (anchor: NSLayoutXAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:multiplier:'; { available in macos , ios , tvos  }
    function constraintLessThanOrEqualToSystemSpacingAfterAnchor_multiplier (anchor: NSLayoutXAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToSystemSpacingAfterAnchor:multiplier:'; { available in macos , ios , tvos  }
  end;

type
  NSLayoutYAxisAnchor = objcclass external (NSLayoutAnchor)
  public
    function anchorWithOffsetToAnchor (otherAnchor: NSLayoutYAxisAnchor): NSLayoutDimension; message 'anchorWithOffsetToAnchor:'; { available in macos , ios , tvos  }
    function constraintEqualToSystemSpacingBelowAnchor_multiplier (anchor: NSLayoutYAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintEqualToSystemSpacingBelowAnchor:multiplier:'; { available in macos , ios , tvos  }
    function constraintGreaterThanOrEqualToSystemSpacingBelowAnchor_multiplier (anchor: NSLayoutYAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:multiplier:'; { available in macos , ios , tvos  }
    function constraintLessThanOrEqualToSystemSpacingBelowAnchor_multiplier (anchor: NSLayoutYAxisAnchor; multiplier: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToSystemSpacingBelowAnchor:multiplier:'; { available in macos , ios , tvos  }
  end;

type
  NSLayoutDimension = objcclass external (NSLayoutAnchor)
  public
    function constraintEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintEqualToConstant:';
    function constraintGreaterThanOrEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToConstant:';
    function constraintLessThanOrEqualToConstant (c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToConstant:';
    function constraintEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:multiplier:';
    function constraintGreaterThanOrEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:multiplier:';
    function constraintLessThanOrEqualToAnchor_multiplier (anchor: NSLayoutDimension; m: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:multiplier:';
    function constraintEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintEqualToAnchor:multiplier:constant:';
    function constraintGreaterThanOrEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintGreaterThanOrEqualToAnchor:multiplier:constant:';
    function constraintLessThanOrEqualToAnchor_multiplier_constant (anchor: NSLayoutDimension; m: CGFloat; c: CGFloat): NSLayoutConstraint; message 'constraintLessThanOrEqualToAnchor:multiplier:constant:';
  end;
{$endif}

{$endif}
