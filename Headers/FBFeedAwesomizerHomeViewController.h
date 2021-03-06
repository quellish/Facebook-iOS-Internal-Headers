//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBFeedAwesomizerCardViewControllerEventListener-Protocol.h"

@class FBComponentTableViewDataSource, FBFeedAwesomizerHomeLogger, FBFeedAwesomizerHomeTableFooterView, FBFeedAwesomizerHomeTopBarView, FBFeedAwesomizerHomeViewControllerListenerAnnouncer, FBUserSession, NSString;

@interface FBFeedAwesomizerHomeViewController : UIViewController <CKComponentProvider, FBComponentTableViewDataSourceCellConfigProvider, FBFeedAwesomizerCardViewControllerEventListener>
{
    FBUserSession *_session;
    int _directlyPresentedCardIdentifier;
    FBFeedAwesomizerHomeTopBarView *_topBarView;
    FBFeedAwesomizerHomeTableFooterView *_tableFooterView;
    FBFeedAwesomizerHomeViewControllerListenerAnnouncer *_listenerAnnouncer;
    FBComponentTableViewDataSource *_dataSource;
    FBFeedAwesomizerHomeLogger *_logger;
    BOOL _hasAppeared;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (BOOL)enabledForSession:(id)arg1;
+ (id)viewControllerToOpenDirectlyWithCard:(int)arg1 session:(id)arg2 location:(id)arg3;
+ (void)presentWithNavigationCoordinator:(id)arg1 session:(id)arg2 openDirectlyToCard:(int)arg3 location:(id)arg4;
- (void).cxx_destruct;
- (void)didTapMoreOptions:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)presentCard:(id)arg1;
- (void)didTapCard:(id)arg1;
- (void)cardWillClose:(id)arg1 takenActions:(unsigned int)arg2 isCompleted:(BOOL)arg3;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 directOpenCard:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

