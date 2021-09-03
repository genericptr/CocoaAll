{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCompositionTrack.h }

{$ifdef TYPES}
type
  AVCompositionTrackPtr = ^AVCompositionTrack;
  AVMutableCompositionTrackPtr = ^AVMutableCompositionTrack;
  AVCompositionTrackFormatDescriptionReplacementPtr = ^AVCompositionTrackFormatDescriptionReplacement;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCompositionTrack = objcclass external (AVAssetTrack)
  private
    _priv: AVCompositionTrackInternal;
  public
    function segments: NSArray; message 'segments';
    function segmentForTrackTime (trackTime: CMTime): AVCompositionTrackSegment; message 'segmentForTrackTime:';
    function formatDescriptionReplacements: NSArray; message 'formatDescriptionReplacements'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVMutableCompositionTrack = objcclass external (AVCompositionTrack)
  private
    _mutablePriv: AVMutableCompositionTrackInternal;
  public
    procedure setEnabled(newValue: objcbool); message 'setEnabled:'; { unavailable in watchos }
    function isEnabled: objcbool; message 'isEnabled'; { unavailable in watchos }
    procedure setNaturalTimeScale(newValue: CMTimeScale); message 'setNaturalTimeScale:';
    function naturalTimeScale: CMTimeScale; message 'naturalTimeScale';
    procedure setLanguageCode(newValue: NSString); message 'setLanguageCode:';
    function languageCode: NSString; message 'languageCode';
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
    procedure setPreferredTransform(newValue: CGAffineTransform); message 'setPreferredTransform:';
    function preferredTransform: CGAffineTransform; message 'preferredTransform';
    procedure setPreferredVolume(newValue: single); message 'setPreferredVolume:';
    function preferredVolume: single; message 'preferredVolume';
    procedure setSegments(newValue: NSArray); message 'setSegments:';
    function segments: NSArray; message 'segments';
    function insertTimeRange_ofTrack_atTime_error (timeRange: CMTimeRange; track: AVAssetTrack; startTime: CMTime; outError: NSErrorPtr): objcbool; message 'insertTimeRange:ofTrack:atTime:error:';
    function insertTimeRanges_ofTracks_atTime_error (timeRanges: NSArray; tracks: NSArray; startTime: CMTime; outError: NSErrorPtr): objcbool; message 'insertTimeRanges:ofTracks:atTime:error:'; { available in macos , ios , tvos , watchos  }
    procedure insertEmptyTimeRange (timeRange: CMTimeRange); message 'insertEmptyTimeRange:';
    procedure removeTimeRange (timeRange: CMTimeRange); message 'removeTimeRange:';
    procedure scaleTimeRange_toDuration (timeRange: CMTimeRange; duration: CMTime); message 'scaleTimeRange:toDuration:';
    function validateTrackSegments_error (trackSegments: NSArray; outError: NSErrorPtr): objcbool; message 'validateTrackSegments:error:';
    procedure addTrackAssociationToTrack_type (compositionTrack: AVCompositionTrack; trackAssociationType: AVTrackAssociationType); message 'addTrackAssociationToTrack:type:'; { available in macos , ios , tvos , watchos  }
    procedure removeTrackAssociationToTrack_type (compositionTrack: AVCompositionTrack; trackAssociationType: AVTrackAssociationType); message 'removeTrackAssociationToTrack:type:'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVCompositionTrackFormatDescriptionReplacement = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function originalFormatDescription: CMFormatDescriptionRef; message 'originalFormatDescription';
    function replacementFormatDescription: CMFormatDescriptionRef; message 'replacementFormatDescription';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  AVMutableCompositionTrackFormatDescriptionReplacement = objccategory external (AVMutableCompositionTrack)
    procedure replaceFormatDescription_withFormatDescription (originalFormatDescription: CMFormatDescriptionRef; replacementFormatDescription: CMFormatDescriptionRef); message 'replaceFormatDescription:withFormatDescription:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$else}
{$endif}