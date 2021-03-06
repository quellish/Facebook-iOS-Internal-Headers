//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedOutboxAssetImageLoaderListener-Protocol.h"
#import "FBFeedOutboxCurrentStoriesListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FBFeedOutboxAssetImageCache, FBFeedOutboxAssetImageLoader, FBFeedOutboxListRowUpdater;

@interface FBFeedOutboxStoryPreviewImageUpdater : NSObject <FBFeedOutboxCurrentStoriesListener, FBFeedOutboxAssetImageLoaderListener>
{
    id <FBFeedOutboxAssetImageCache> _assetImageCache;
    id <FBFeedOutboxAssetImageLoader> _assetImageLoader;
    id <FBFeedOutboxListRowUpdater> _rowUpdater;
    NSMutableDictionary *_pendingRowsByPublicationID;
}

- (void).cxx_destruct;
- (void)fetchedPreviewImage:(id)arg1 forAssetID:(id)arg2 publicationID:(id)arg3 imageType:(unsigned int)arg4;
- (void)updatedStoryRows:(id)arg1 allStories:(id)arg2;
- (void)removedStoryRows:(id)arg1 allStories:(id)arg2;
- (void)insertedStoryRows:(id)arg1 allStories:(id)arg2;
- (id)initWithRowUpdater:(id)arg1 assetImageCache:(id)arg2 assetImageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

