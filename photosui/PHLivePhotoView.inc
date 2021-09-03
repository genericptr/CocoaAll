{ Parsed from PhotosUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PhotosUI.framework/Headers/PHLivePhotoView.h }

{$ifdef TYPES}
type
  PHLivePhotoViewPtr = ^PHLivePhotoView;
  PHLivePhotoViewDelegateProtocolPtr = ^PHLivePhotoViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoViewPlaybackStyle = NSInteger;
  PHLivePhotoViewPlaybackStylePtr = ^PHLivePhotoViewPlaybackStyle;

const
  PHLivePhotoViewPlaybackStyleUndefined = 0;
  PHLivePhotoViewPlaybackStyleFull = 1;
  PHLivePhotoViewPlaybackStyleHint = 2;

type
  PHLivePhotoViewContentMode = NSInteger;
  PHLivePhotoViewContentModePtr = ^PHLivePhotoViewContentMode;

const
  PHLivePhotoViewContentModeAspectFit = 0;
  PHLivePhotoViewContentModeAspectFill = 1;
{$endif}

{$ifdef CLASSES}

type
  PHLivePhotoView = objcclass external (NSView)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setLivePhoto(newValue: PHLivePhoto); message 'setLivePhoto:';
    function livePhoto: PHLivePhoto; message 'livePhoto';
    procedure setContentMode(newValue: PHLivePhotoViewContentMode); message 'setContentMode:';
    function contentMode: PHLivePhotoViewContentMode; message 'contentMode';
    procedure setAudioVolume(newValue: single); message 'setAudioVolume:';
    function audioVolume: single; message 'audioVolume';
    procedure setMuted(newValue: objcbool); message 'setMuted:';
    function isMuted: objcbool; message 'isMuted';
    procedure startPlaybackWithStyle (playbackStyle: PHLivePhotoViewPlaybackStyle); message 'startPlaybackWithStyle:';
    procedure stopPlayback; message 'stopPlayback';
    procedure stopPlaybackAnimated (animated: objcbool); message 'stopPlaybackAnimated:';
    function livePhotoBadgeView: NSViewPtr; message 'livePhotoBadgeView';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PHLivePhotoViewDelegateProtocol = objcprotocol external name 'PHLivePhotoViewDelegate' (NSObjectProtocol)
  optional
    procedure livePhotoView_willBeginPlaybackWithStyle (livePhotoView: PHLivePhotoView; playbackStyle: PHLivePhotoViewPlaybackStyle); message 'livePhotoView:willBeginPlaybackWithStyle:';
    procedure livePhotoView_didEndPlaybackWithStyle (livePhotoView: PHLivePhotoView; playbackStyle: PHLivePhotoViewPlaybackStyle); message 'livePhotoView:didEndPlaybackWithStyle:';
  end;
{$endif}
