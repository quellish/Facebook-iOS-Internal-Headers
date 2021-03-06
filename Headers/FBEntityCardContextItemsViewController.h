//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBEntityCardPagesContextItemsHelperDelegate-Protocol.h"
#import "FBLongTextExpandableViewDelegate-Protocol.h"

@class FBActionSheetButtonItem, FBConsistentLookasideCacheObservationHandle, FBLoadingIndicatorView, FBLongTextExpandableCell, FBPopoverActionSheet, FBUserSession, NSArray, NSAttributedString, NSMutableSet, NSString, UIImageView, UITableViewCell;
@protocol FBEntityCardContextItemsExtraLoggerDelegateProtocol, FBEntityCardContextItemsLoggerProtocol, FBEntityCardContextItemsNavigationHandlerProtocol, FBEntityCardContextItemsViewControllerDelegateProtocol, FBQueriedNodeFieldsProtocol;

@interface FBEntityCardContextItemsViewController : UITableViewController <FBLongTextExpandableViewDelegate, FBEntityCardPagesContextItemsHelperDelegate>
{
    FBUserSession *_session;
    NSArray *_contextItems;
    id <FBQueriedNodeFieldsProtocol> _entity;
    unsigned int _surface;
    unsigned int _initialContextItemCount;
    BOOL _hasNextPage;
    UIImageView *_moreImageView;
    FBLoadingIndicatorView *_loadingIndicatorView;
    unsigned int _indexToStartImpressionLogging;
    NSMutableSet *_hiddenItems;
    FBPopoverActionSheet *_moreInfoPopover;
    FBActionSheetButtonItem *_onlyPageAdmins;
    FBActionSheetButtonItem *_respondTo;
    FBActionSheetButtonItem *_learnMoreLink;
    FBConsistentLookasideCacheObservationHandle *_menuInfoCLCHandle;
    BOOL _isSelected;
    FBLongTextExpandableCell *_descriptionCell;
    id <FBEntityCardContextItemsExtraLoggerDelegateProtocol> _extraLoggerDelegate;
    id <FBEntityCardContextItemsViewControllerDelegateProtocol> _delegate;
    NSAttributedString *_longDescription;
    id <FBEntityCardContextItemsLoggerProtocol> _logger;
    UITableViewCell *_expandCell;
}

@property(retain, nonatomic) UITableViewCell *expandCell; // @synthesize expandCell=_expandCell;
@property(readonly, nonatomic) id <FBEntityCardContextItemsLoggerProtocol> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSAttributedString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) id <FBEntityCardContextItemsViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBEntityCardContextItemsExtraLoggerDelegateProtocol> extraLoggerDelegate; // @synthesize extraLoggerDelegate=_extraLoggerDelegate;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) FBLongTextExpandableCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
- (void).cxx_destruct;
- (void)hideContextRowWithType:(id)arg1;
- (void)tappedURL:(id)arg1;
- (id)_decoratedAttributedStringWithAttributedString:(id)arg1 textFont:(id)arg2 textColor:(struct CGColor *)arg3 tagFont:(id)arg4 tagColor:(struct CGColor *)arg5;
- (void)_didTapContextItemAtPosition:(unsigned int)arg1;
- (unsigned int)_findContextItemOfType:(id)arg1;
- (BOOL)_updatedEntity:(id)arg1 oldEntity:(id)arg2;
- (BOOL)_shouldShowExpandCell;
- (BOOL)_isExpandCellRow:(int)arg1;
- (void)_handleExpandRowTap;
- (void)_consistentMenuFieldDidChange:(id)arg1;
- (void)_setupPageMenuCLCObserver:(id)arg1;
- (id)analyticsModule;
- (void)_showMoreInfoPopover:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (void)_popoverTapAction;
- (id)moreInfoPopover;
- (void)viewDidAppear:(BOOL)arg1;
@property(nonatomic) __weak id <FBEntityCardContextItemsNavigationHandlerProtocol> navigationHandler;
- (void)configureWithEntity:(id)arg1 addEntityCardContextItems:(id)arg2;
- (void)prepareForReuse;
- (void)logImpressionsIfNeeded;
- (BOOL)configureWithEntity:(id)arg1 entityCardContextItems:(id)arg2 hasNextPage:(BOOL)arg3 enforceRefresh:(BOOL)arg4;
- (id)initWithSession:(id)arg1 entityType:(id)arg2 surface:(unsigned int)arg3 initialContextItemCount:(int)arg4 navigationHandler:(id)arg5 entityCardAnalytics:(id)arg6;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

