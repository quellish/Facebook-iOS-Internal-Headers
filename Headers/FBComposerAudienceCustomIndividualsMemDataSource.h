//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPrivacyDataSourceWithObjects-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBKVOController, FBLocalizedIndexedCollation, FBMutableTaggableCollection, FBUserSession, NSMutableArray, NSOrderedSet, NSString;
@protocol FBComposerAudienceCustomIndividualsDataSourceDelegate, FBTableViewMutating;

@interface FBComposerAudienceCustomIndividualsMemDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, FBPrivacyDataSourceWithObjects>
{
    NSMutableArray *_collatedSections;
    NSOrderedSet *_filteredFriendsList;
    NSOrderedSet *_friendsList;
    BOOL _hasFinishedLoading;
    FBKVOController *_KVOController;
    FBLocalizedIndexedCollation *_localizedIndexedCollation;
    FBUserSession *_session;
    FBMutableTaggableCollection *_taggableUsers;
    id <FBComposerAudienceCustomIndividualsDataSourceDelegate> _delegate;
    NSString *_searchText;
    id <FBTableViewMutating> _tableViewMutator;
}

@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <FBComposerAudienceCustomIndividualsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_finishedDownloading;
- (BOOL)didFinishLoading;
- (void)_didDownloadMoreFriends;
- (void)_loadFriendsListData;
- (void)_loadDataIfNotLoadedAlready;
- (void)updateTaggableUsers:(id)arg1;
- (id)indexPathForOption:(id)arg1;
- (id)optionForIndexPath:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)_checkedImageForCell;
- (id)_defaultImageForCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)hasContentForSection:(int)arg1;
- (void)_filterUsingCollation;
- (void)_filterFriendsUsingSearchText:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

