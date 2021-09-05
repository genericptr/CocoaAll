{ Parsed from ITunesLibrary.framework ITLibAlbum.h }
{ Created on Sun Mar 8 1:48:57 2015 }


{$ifdef TYPES}
type
  ITLibAlbumPtr = ^ITLibAlbum;
{$endif}

{$ifdef CLASSES}

type
  ITLibAlbum = objcclass external (NSObject)
  private
    _title: NSString;
    _sortTitle: NSString;
    _compilation: objcbool;
    _discCount: NSUInteger;
    _discNumber: NSUInteger;
    _rating: NSInteger;
    _ratingComputed: objcbool;
    _gapless: objcbool;
    _trackCount: NSUInteger;
    _albumArtist: NSString;
    _sortAlbumArtist: NSString;
  public
    function title: NSString; message 'title';
    function sortTitle: NSString; message 'sortTitle';
    function isCompilation: objcbool; message 'isCompilation';
    function artist: ITLibArtist; message 'artist';
    function discCount: NSUInteger; message 'discCount';
    function discNumber: NSUInteger; message 'discNumber';
    function rating: NSInteger; message 'rating';
    function isRatingComputed: objcbool; message 'isRatingComputed';
    function isGapless: objcbool; message 'isGapless';
    function trackCount: NSUInteger; message 'trackCount';
    function albumArtist: NSString; message 'albumArtist';
    function sortAlbumArtist: NSString; message 'sortAlbumArtist';
  end;
{$endif}

