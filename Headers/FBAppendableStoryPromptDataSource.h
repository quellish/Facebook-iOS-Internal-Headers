//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppendableStoryPromptControllerDelegate-Protocol.h"
#import "FBCollectionViewSectionDataSource-Protocol.h"
#import "FBStreamListener-Protocol.h"

@class FBAppendableStoryPromptController, FBUserSession, NSString;
@protocol FBCollectionViewMutating;

@interface FBAppendableStoryPromptDataSource : NSObject <FBCollectionViewSectionDataSource, FBAppendableStoryPromptControllerDelegate, FBStreamListener>
{
    FBUserSession *_session;
    FBAppendableStoryPromptController *_appendableStoryPromptController;
    BOOL _isDisplayingCell;
    BOOL _enabled;
    id <FBCollectionViewMutating> _collectionViewMutator;
}

+ (id)cellReuseIdentifier;
+ (id)datasourceForToolboxManager:(id)arg1 connection:(id)arg2 session:(id)arg3;
@property(nonatomic) __weak id <FBCollectionViewMutating> collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)dealloc;
- (void)appendableStoryPromptControllerNeedsReload:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerClassWithReuseIdentifier;
- (void)appendableStoryPromptController:(id)arg1 promptChangedEnabling:(BOOL)arg2;
- (id)initWithToolboxManager:(id)arg1 connection:(id)arg2 session:(id)arg3;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

