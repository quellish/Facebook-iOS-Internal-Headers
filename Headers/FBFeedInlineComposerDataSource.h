//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCollectionViewSectionDataSource-Protocol.h"
#import "FBFeedInlineComposerControllerDelegate-Protocol.h"

@class FBFeedInlineComposerController, FBUserSession, NSString;
@protocol FBCollectionViewMutating, FBFeedInlineComposerDataSourceDelegate;

@interface FBFeedInlineComposerDataSource : NSObject <FBCollectionViewSectionDataSource, FBFeedInlineComposerControllerDelegate>
{
    FBUserSession *_session;
    FBFeedInlineComposerController *_inlineComposerController;
    BOOL _isDisplayingCell;
    CDStruct_1180ccb7 _appLayoutExperimentConfig;
    id <FBCollectionViewMutating> _collectionViewMutator;
    id <FBFeedInlineComposerDataSourceDelegate> _delegate;
}

+ (id)cellReuseIdentifier;
@property(nonatomic) __weak id <FBFeedInlineComposerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBCollectionViewMutating> collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logImpression;
- (void)dealloc;
- (void)inlineComposerDidUpdatePromptSession:(id)arg1;
- (BOOL)inlineComposerCanReload:(id)arg1;
- (void)inlineComposerNeedsReload:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerClassWithReuseIdentifier;
- (id)_footerButtonTypes;
- (id)initWithToolboxManager:(id)arg1 session:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

