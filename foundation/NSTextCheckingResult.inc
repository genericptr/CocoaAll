{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSTextCheckingResult.h }

{$ifdef TYPES}
type
  NSTextCheckingResultPtr = ^NSTextCheckingResult;
{$endif}

{$ifdef TYPES}
type
  NSTextCheckingType = cuint64;
  NSTextCheckingTypePtr = ^NSTextCheckingType;

const
  NSTextCheckingTypeOrthography = 1 shl 0;
  NSTextCheckingTypeSpelling = 1 shl 1;
  NSTextCheckingTypeGrammar = 1 shl 2;
  NSTextCheckingTypeDate = 1 shl 3;
  NSTextCheckingTypeAddress = 1 shl 4;
  NSTextCheckingTypeLink = 1 shl 5;
  NSTextCheckingTypeQuote = 1 shl 6;
  NSTextCheckingTypeDash = 1 shl 7;
  NSTextCheckingTypeReplacement = 1 shl 8;
  NSTextCheckingTypeCorrection = 1 shl 9;
  NSTextCheckingTypeRegularExpression = 1 shl 10 { available in macos , ios , watchos , tvos  };
  NSTextCheckingTypePhoneNumber = 1 shl 11 { available in macos , ios , watchos , tvos  };
  NSTextCheckingTypeTransitInformation = 1 shl 12 { available in macos , ios , watchos , tvos  };

type
  NSTextCheckingTypes = cuint64;
  NSTextCheckingTypesPtr = ^NSTextCheckingTypes;
  NSTextCheckingKey = NSString;
  NSTextCheckingKeyPtr = ^NSTextCheckingKey;
{$endif}

{$ifdef CLASSES}

type
  NSTextCheckingResult = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function resultType: NSTextCheckingType; message 'resultType';
    function range: NSRange; message 'range';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSTextCheckingResultOptional = objccategory external (NSTextCheckingResult)
    function orthography: NSOrthography; message 'orthography';
    function grammarDetails: NSArray; message 'grammarDetails';
    function date: NSDate; message 'date';
    function timeZone: NSTimeZone; message 'timeZone';
    function duration: NSTimeInterval; message 'duration';
    function components: NSDictionary; message 'components'; { available in macos , ios , watchos , tvos  }
    function URL: NSURL; message 'URL';
    function replacementString: NSString; message 'replacementString';
    function alternativeStrings: NSArray; message 'alternativeStrings'; { available in macos , ios , watchos , tvos  }
    function regularExpression: NSRegularExpression; message 'regularExpression'; { available in macos , ios , watchos , tvos  }
    function phoneNumber: NSString; message 'phoneNumber'; { available in macos , ios , watchos , tvos  }
    function numberOfRanges: NSUInteger; message 'numberOfRanges'; { available in macos , ios , watchos , tvos  }
    function rangeAtIndex (idx: NSUInteger): NSRange; message 'rangeAtIndex:'; { available in macos , ios , watchos , tvos  }
    function rangeWithName (name: NSString): NSRange; message 'rangeWithName:'; { available in macosx , ios , watchos , tvos  }
    function resultByAdjustingRangesWithOffset (offset: NSInteger): NSTextCheckingResult; message 'resultByAdjustingRangesWithOffset:'; { available in macos , ios , watchos , tvos  }
    function addressComponents: NSDictionary; message 'addressComponents';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextCheckingNameKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingJobTitleKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingOrganizationKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingStreetKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingCityKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingStateKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingZIPKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingCountryKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingPhoneKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingAirlineKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSTextCheckingFlightKey: NSTextCheckingKey { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSTextCheckingResultCreation = objccategory external (NSTextCheckingResult)
    class function orthographyCheckingResultWithRange_orthography (range_: NSRange; orthography: NSOrthography): NSTextCheckingResult; message 'orthographyCheckingResultWithRange:orthography:';
    class function spellCheckingResultWithRange (range_: NSRange): NSTextCheckingResult; message 'spellCheckingResultWithRange:';
    class function grammarCheckingResultWithRange_details (range_: NSRange; details: NSArray): NSTextCheckingResult; message 'grammarCheckingResultWithRange:details:';
    class function dateCheckingResultWithRange_date (range_: NSRange; date: NSDate): NSTextCheckingResult; message 'dateCheckingResultWithRange:date:';
    class function dateCheckingResultWithRange_date_timeZone_duration (range_: NSRange; date: NSDate; timeZone: NSTimeZone; duration: NSTimeInterval): NSTextCheckingResult; message 'dateCheckingResultWithRange:date:timeZone:duration:';
    class function addressCheckingResultWithRange_components (range_: NSRange; components: NSDictionary): NSTextCheckingResult; message 'addressCheckingResultWithRange:components:';
    class function linkCheckingResultWithRange_URL (range_: NSRange; url: NSURL): NSTextCheckingResult; message 'linkCheckingResultWithRange:URL:';
    class function quoteCheckingResultWithRange_replacementString (range_: NSRange; replacementString: NSString): NSTextCheckingResult; message 'quoteCheckingResultWithRange:replacementString:';
    class function dashCheckingResultWithRange_replacementString (range_: NSRange; replacementString: NSString): NSTextCheckingResult; message 'dashCheckingResultWithRange:replacementString:';
    class function replacementCheckingResultWithRange_replacementString (range_: NSRange; replacementString: NSString): NSTextCheckingResult; message 'replacementCheckingResultWithRange:replacementString:';
    class function correctionCheckingResultWithRange_replacementString (range_: NSRange; replacementString: NSString): NSTextCheckingResult; message 'correctionCheckingResultWithRange:replacementString:';
    class function correctionCheckingResultWithRange_replacementString_alternativeStrings (range_: NSRange; replacementString: NSString; alternativeStrings: NSArray): NSTextCheckingResult; message 'correctionCheckingResultWithRange:replacementString:alternativeStrings:'; { available in macos , ios , watchos , tvos  }
    class function regularExpressionCheckingResultWithRanges_count_regularExpression (ranges: NSRangePointer; count: NSUInteger; regularExpression: NSRegularExpression): NSTextCheckingResult; message 'regularExpressionCheckingResultWithRanges:count:regularExpression:'; { available in macos , ios , watchos , tvos  }
    class function phoneNumberCheckingResultWithRange_phoneNumber (range_: NSRange; phoneNumber: NSString): NSTextCheckingResult; message 'phoneNumberCheckingResultWithRange:phoneNumber:'; { available in macos , ios , watchos , tvos  }
    class function transitInformationCheckingResultWithRange_components (range_: NSRange; components: NSDictionary): NSTextCheckingResult; message 'transitInformationCheckingResultWithRange:components:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

