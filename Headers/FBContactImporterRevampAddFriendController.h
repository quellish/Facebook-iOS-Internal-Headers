//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBContactImporterViewController.h"

#import "FBContactImporterInterstitialViewController-Protocol.h"
#import "FBContactImporterRevampModelListener-Protocol.h"
#import "FBContactImporterRevampTableViewContactCellDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBSimpleNUXStep-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBContactImporterProgressView, FBContactImporterRevampHeaderView, FBContactImporterRevampModel, FBContactImporterRevampScrollManager, FBContactImporterRevampView, FBPerson, FBTransientViewStateManager, FBUserSession, NSArray, NSMutableDictionary, NSMutableSet, NSString, UISearchBar, UISearchDisplayController, UITableView;
@protocol FBContactImporterInterstitialViewControllerDelegate, FBSimpleNUXStepViewControlling;

@interface FBContactImporterRevampAddFriendController : FBContactImporterViewController <FBContactImporterRevampModelListener, FBContactImporterRevampTableViewContactCellDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, FBPresentableViewController, FBSimpleNUXStep, FBContactImporterInterstitialViewController>
{
    FBPerson *_viewer;
    FBContactImporterRevampModel *_model;
    FBUserSession *_session;
    NSMutableSet *_selectedContacts;
    NSArray *_searchResultContacts;
    NSArray *_searchResultPYMK;
    FBTransientViewStateManager *_viewStateManager;
    int _contactImporterFlow;
    int _ccuRef;
    NSMutableDictionary *_numberOfImportedContacts;
    UISearchDisplayController *_searchDisplayController;
    FBContactImporterRevampScrollManager *_searchBarPositionManager;
    unsigned long long _initialTime;
    unsigned int _numberOfContacts;
    unsigned int _howManyContactsSeen;
    NSString *_requestSessionID;
    FBContactImporterRevampHeaderView *_pymkHeaderView;
    FBContactImporterRevampHeaderView *_pymkSearchHeaderView;
    id <FBSimpleNUXStepViewControlling> _nuxController;
    id <FBContactImporterInterstitialViewControllerDelegate> _interstitialViewControllerDelegate;
    FBContactImporterRevampView *_ciView;
    UITableView *_tableView;
    FBContactImporterProgressView *_progressView;
    UISearchBar *_searchBar;
}

@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) FBContactImporterProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FBContactImporterRevampView *ciView; // @synthesize ciView=_ciView;
@property(nonatomic) __weak id <FBContactImporterInterstitialViewControllerDelegate> interstitialViewControllerDelegate; // @synthesize interstitialViewControllerDelegate=_interstitialViewControllerDelegate;
@property(nonatomic) id <FBSimpleNUXStepViewControlling> nuxController; // @synthesize nuxController=_nuxController;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_markAbortedForEvents;
- (void)_markAnimationForEvents;
- (void)_markStartForEvents;
- (void)_logError:(id)arg1;
- (void)_logEvent:(id)arg1 extraData:(id)arg2;
- (id)_buildFBMemPersonForFBContactImporterFacebookPerson:(id)arg1;
- (void)_showSettingsAlert;
- (void)_dismissView:(id)arg1;
- (void)_showNextView;
- (void)_sendCancelRequestToContactImporterFaceBookPerson:(id)arg1;
- (void)_sendRequestToContactImporterFaceBookPerson:(id)arg1;
- (void)_cancelTapHandler:(id)arg1;
- (void)_nextStep;
- (void)_configureNavigationItemForDone;
- (void)_configureNavigationItemAfterLoading;
- (void)_configureNavigationItemDuringLoading;
- (void)_completeSteps;
- (void)_filterMatchedContactsForSearchText:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectContactImporterTableViewContactCell:(id)arg1 selected:(BOOL)arg2;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfContacts:(unsigned int)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfMatchedContacts:(unsigned int)arg2 forBatchAtIndex:(unsigned int)arg3;
- (void)contactImporterRevampModelDidReadAddressBook:(id)arg1;
- (void)contactImporterRevampModelDidFailPYMKLoading:(id)arg1 withError:(id)arg2;
- (void)contactImporterRevampModelDidLoadPYMK:(id)arg1;
- (void)contactImporterRevampModelDidFailLoading:(id)arg1 withError:(id)arg2;
- (void)contactImporterRevampModelDidLoad:(id)arg1;
- (void)contactImporterRevampModelDidBatchLoad:(id)arg1 fromIndex:(unsigned int)arg2 forNumberOfMatchedContacts:(unsigned int)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (struct CGSize)contentSizeForViewInPopover;
- (int)preferredStatusBarStyle;
- (BOOL)fb_hidesTabBar;
- (BOOL)fb_showNavigationJewels;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 contactImporterFlow:(int)arg2 continuousContactUploadRef:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

