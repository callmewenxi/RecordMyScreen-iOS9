/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItem.h>
#import "MediaPlayer-Structs.h"
#import "MediaPlayer/MPMediaEntity.h"

@interface MPMediaItem ()
@property(readonly, assign, nonatomic) NSArray* chapters;
+(BOOL)canFilterByProperty:(id)property;
+(void)_createFilterableDictionary;
+(BOOL)_isValidItemProperty:(id)property;
-(instancetype)initWithPersistentID:(unsigned long long)persistentID;
-(id)_initWithMLTrack:(id)mltrack;
-(void)dealloc;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(id)valueForProperty:(id)property;
-(void)_didReceiveMemoryWarning:(id)warning;
-(id)_globalID;
-(id)_mediaType;
-(id)_title;
-(id)_albumTitle;
-(id)_artist;
-(id)_albumArtist;
-(id)_genre;
-(id)_composer;
-(id)_playbackDuration;
-(id)_albumTrackNumber;
-(id)_albumTrackCount;
-(id)_discNumber;
-(id)_discCount;
-(id)_artwork;
-(id)_lyrics;
-(id)_isCompilation;
-(id)_year;
-(id)_releaseDate;
-(id)_bpm;
-(id)_comments;
-(id)_grouping;
-(id)_storeItemAdamID;
-(id)_artworkDataForSize:(CGSize)size;
-(id)_artworkDataForSize:(CGSize)size atPlaybackTime:(double)playbackTime;
-(id)_playbackTimesForChapterArtwork;
-(id)_podcastTitle;
-(id)_seriesName;
-(id)_seasonNumber;
-(id)_episodeNumber;
-(id)_playCount;
-(id)_skipCount;
-(id)_rating;
-(id)_lastPlayedDate;
-(id)_sortTitle;
-(id)_sortArtist;
-(id)_sortAlbumTitle;
-(id)_sortAlbumArtist;
-(id)_sortComposer;
-(id)_chapterDictionaries;
@end
// ----------------------------------------------------

// Item properties can be used with -valueForProperty: to fetch metadata about an MPMediaItem.
// Properties marked filterable can also be used to build MPMediaPropertyPredicates (see MPMediaQuery.h).

// Media properties
MP_EXTERN NSString *const MPMediaItemPropertyPersistentID;     // @"persistentID",        NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyMediaType;        // @"mediaType",           NSNumber of MPMediaType (NSInteger),          filterable
MP_EXTERN NSString *const MPMediaItemPropertyTitle;            // @"title",               NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyAlbumTitle;       // @"albumTitle",          NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyAlbumPersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"albumPID",            NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyArtist;           // @"artist",              NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyArtistPersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"artistPID",           NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyAlbumArtist;      // @"albumArtist",         NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyAlbumArtistPersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"albumArtistPID",      NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyGenre;            // @"genre",               NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyGenrePersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"genrePID",            NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyComposer;         // @"composer",            NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyComposerPersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"composerPID",         NSNumber of uint64_t (unsigned long long),    filterable
MP_EXTERN NSString *const MPMediaItemPropertyPlaybackDuration; // @"playbackDuration",    NSNumber of NSTimeInterval (double)
MP_EXTERN NSString *const MPMediaItemPropertyAlbumTrackNumber; // @"albumTrackNumber",    NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyAlbumTrackCount;  // @"albumTrackCount",     NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyDiscNumber;       // @"discNumber",          NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyDiscCount;        // @"discCount",           NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyArtwork;          // @"artwork",             MPMediaItemArtwork
MP_EXTERN NSString *const MPMediaItemPropertyLyrics;           // @"lyrics",              NSString
MP_EXTERN NSString *const MPMediaItemPropertyIsCompilation;    // @"isCompilation",       NSNumber of BOOL,                             filterable
MP_EXTERN NSString *const MPMediaItemPropertyReleaseDate NS_AVAILABLE_IPHONE(4_0);
                                                               // @"releaseDate",         NSDate
MP_EXTERN NSString *const MPMediaItemPropertyBeatsPerMinute NS_AVAILABLE_IPHONE(4_0);
                                                               // @"beatsPerMinute",      NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyComments NS_AVAILABLE_IPHONE(4_0);
                                                               // @"comments",            NSString
MP_EXTERN NSString *const MPMediaItemPropertyAssetURL NS_AVAILABLE_IPHONE(4_0);
                                                               // @"assetURL",            NSURL

// Podcast properties
MP_EXTERN NSString *const MPMediaItemPropertyPodcastTitle;     // @"podcastTitle",        NSString,                                     filterable
MP_EXTERN NSString *const MPMediaItemPropertyPodcastPersistentID NS_AVAILABLE_IPHONE(4_2);
                                                               // @"podcastPID",          NSNumber of uint64_t (unsigned long long),    filterable

// User properties
MP_EXTERN NSString *const MPMediaItemPropertyPlayCount;        // @"playCount",           NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertySkipCount;        // @"skipCount",           NSNumber of NSUInteger
MP_EXTERN NSString *const MPMediaItemPropertyRating;           // @"rating",              NSNumber of NSUInteger, 0...5
MP_EXTERN NSString *const MPMediaItemPropertyLastPlayedDate;   // @"lastPlayedDate",      NSDate
MP_EXTERN NSString *const MPMediaItemPropertyUserGrouping NS_AVAILABLE_IPHONE(4_0);
                                                               // @"userGrouping",        NSString
