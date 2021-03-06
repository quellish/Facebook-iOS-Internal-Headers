//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTableViewController.h"

@class FBEntityFetcher, FBMemPage, FBUserSession, NSArray;

@interface FBEntityCardFriendsVisitedTableViewController : FBTableViewController
{
    FBUserSession *_session;
    FBEntityFetcher *_fetcher;
    FBMemPage *_page;
    NSArray *_sortedVisitorFriends;
}

- (void).cxx_destruct;
- (void)_handleResponseContent:(id)arg1 error:(id)arg2;
- (void)_sendRequest;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)newCellWithIdentifier:(id)arg1;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)fb_showNavigationJewels;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithPage:(id)arg1 session:(id)arg2;

@end

