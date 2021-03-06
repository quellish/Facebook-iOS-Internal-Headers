//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBEventsDashboardBirthdayCellControllerDelegate-Protocol.h"

@class FBComposerTapHandler, FBEventAnalyticTracker, FBEventLiveGuestlistLoadingCell, FBEventsDashboardBirthdayObjectFetcher, FBTransientViewStateManager, FBUserSession, NSArray, NSDate, NSString;

@interface FBViewAllBirthdaysViewController : UITableViewController <FBEventsDashboardBirthdayCellControllerDelegate>
{
    FBUserSession *_session;
    NSString *_viewerId;
    FBEventsDashboardBirthdayObjectFetcher *_birthdayObjectFetcher;
    NSArray *_birthdaySectionGroups;
    FBTransientViewStateManager *_transientManager;
    FBEventLiveGuestlistLoadingCell *_loadingCell;
    FBEventAnalyticTracker *_tracker;
    FBComposerTapHandler *_composerTapHandler;
    int _renderLocation;
    NSDate *_startDate;
    BOOL _isLoadingResults;
}

@property(nonatomic) BOOL isLoadingResults; // @synthesize isLoadingResults=_isLoadingResults;
- (void).cxx_destruct;
- (void)_openGoodwillIntentTarget:(id)arg1;
- (void)didTapSendMessageForPerson:(id)arg1;
- (void)didTapComposerButtonForPerson:(id)arg1;
- (id)_getAnalyticsExtras;
- (id)analyticsModule;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showLoadingCellVisible:(BOOL)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)fb_showNavBarSearchField;
- (void)_updateBirthdaysAndSections:(id)arg1;
- (void)_loadMoreBirthdays;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 viewerId:(id)arg2 tracker:(id)arg3 previouslyFetchedBirthdays:(id)arg4 startDate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

