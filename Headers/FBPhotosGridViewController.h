//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAlbumViewerDelegate-Protocol.h"
#import "FBClonePhotoViewProviderDelegate-Protocol.h"
#import "FBComposerFlowDelegate-Protocol.h"
#import "FBComposerPublisherStatusListener-Protocol.h"
#import "FBCompositionListener-Protocol.h"
#import "FBGraphQLConnectionSyncStoreListener-Protocol.h"
#import "FBPhotoViewControllerDelegate-Protocol.h"
#import "FBPhotosGridButtonHeaderViewDelegate-Protocol.h"
#import "FBProfilePictureControllerResponderForwarder-Protocol.h"
#import "NSCacheDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FBAnimationPerformanceLogger, FBComposerAuthor, FBComposerPublisherStatusEventFilter, FBComposerTapHandler, FBConnectionStoreViewStateManager, FBMemAlbum, FBPhotoGridPerfLogger, FBPhotosConsumptionReferrer, FBProfilePictureControllerResponder, FBProfilePicturePickerController, FBPublisherManager, FBScenePath, FBUserSession, FBViewStateManagerPerfLogger, NSString, UICollectionView, UIView;
@protocol FBGraphQLConnectionSyncStoreProtocol, FBGraphQLConnectionSyncStoreRequestProvider, FBMediaContainerProtocol, FBPhotosGridViewControllerDelegate;

@interface FBPhotosGridViewController : UIViewController <FBPhotoViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, FBComposerFlowDelegate, FBComposerPublisherStatusListener, FBCompositionListener, FBPhotosGridButtonHeaderViewDelegate, UICollectionViewDelegateFlowLayout, FBProfilePictureControllerResponderForwarder, FBGraphQLConnectionSyncStoreListener, FBClonePhotoViewProviderDelegate, NSCacheDelegate, FBAlbumViewerDelegate>
{
    int _addPhotoButtonSectionIndex;
    int _photoGridSectionIndex;
    int _photoOrder;
    FBAnimationPerformanceLogger *_apTracker;
    FBPhotosConsumptionReferrer *_referrer;
    BOOL _showPhotoUploadViewOnAppear;
    FBViewStateManagerPerfLogger *_viewStateManagerSpinnerLogger;
    id <FBGraphQLConnectionSyncStoreRequestProvider> _requestProvider;
    FBPhotoGridPerfLogger *_photoGridPerfLogger;
    BOOL _isViewVisible;
    FBComposerAuthor *_authorForUploadingPhotos;
    FBComposerPublisherStatusEventFilter *_publisherEventFilter;
    FBPublisherManager *_publisherManager;
    FBComposerTapHandler *_composerTapHandler;
    NSString *_compositionIDForCurrentComposer;
    UIView *_topCornerViewForPopoverSource;
    FBProfilePicturePickerController *_profilePicturePickerController;
    FBProfilePictureControllerResponder *_profilePictureControllerResponder;
    FBMemAlbum *_album;
    BOOL _onlyAllowPhotoSelection;
    BOOL _hideNavigationJewels;
    BOOL _userCanAddPhoto;
    id <FBPhotosGridViewControllerDelegate> _photosGridDelegate;
    UICollectionView *_gridView;
    FBConnectionStoreViewStateManager *_viewStateManager;
    FBUserSession *_session;
    id <FBGraphQLConnectionSyncStoreProtocol> _mediaSetStore;
    id <FBGraphQLConnectionSyncStoreProtocol> _albumStore;
    id <FBMediaContainerProtocol> _mediaContainer;
    FBScenePath *_scenePath;
    NSString *_analyticsModule;
    UIView *_sectionHeaderContentView;
}

@property(retain, nonatomic) UIView *sectionHeaderContentView; // @synthesize sectionHeaderContentView=_sectionHeaderContentView;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(retain, nonatomic) id <FBMediaContainerProtocol> mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) id <FBGraphQLConnectionSyncStoreProtocol> albumStore; // @synthesize albumStore=_albumStore;
@property(retain, nonatomic) id <FBGraphQLConnectionSyncStoreProtocol> mediaSetStore; // @synthesize mediaSetStore=_mediaSetStore;
@property(nonatomic) BOOL userCanAddPhoto; // @synthesize userCanAddPhoto=_userCanAddPhoto;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBConnectionStoreViewStateManager *viewStateManager; // @synthesize viewStateManager=_viewStateManager;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <FBPhotosGridViewControllerDelegate> photosGridDelegate; // @synthesize photosGridDelegate=_photosGridDelegate;
@property(nonatomic) BOOL hideNavigationJewels; // @synthesize hideNavigationJewels=_hideNavigationJewels;
@property(nonatomic) BOOL onlyAllowPhotoSelection; // @synthesize onlyAllowPhotoSelection=_onlyAllowPhotoSelection;
- (void).cxx_destruct;
- (void)_logDebug:(id)arg1;
- (void)gridButtonheaderView:(id)arg1 didTapButton:(id)arg2;
- (BOOL)_isSyncing;
- (struct CGRect)_frameFromEvent:(id)arg1;
- (id)_sourceViewFromSender:(id)arg1 event:(id)arg2;
- (id)_convertToindexPathsFromIndexSet:(id)arg1;
- (BOOL)_isFBID:(id)arg1;
- (BOOL)_isPhotosOfYou;
- (BOOL)_isPhotosOfUser;
- (void)_loadAlbum;
- (id)_photoViewForItemAtIndexPath:(id)arg1;
- (void)_ensureViewAtIndexPathIsVisible:(id)arg1;
- (void)showPhotoUploadView;
- (BOOL)analyticsRequiresNetworkContent;
- (BOOL)analyticsHasCachedNetworkContent;
- (BOOL)analyticsAutomaticallyLogContent;
- (void)_syncNextPageIfNeeded;
- (struct CGRect)photoViewController:(id)arg1 animationBoundsForView:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)fb_showNavigationJewels;
- (int)_buttonTypeForAlbum;
- (void)profilePicturePickerDidCancel:(id)arg1;
- (void)profilePicturePickerDidUploadPic:(id)arg1;
- (void)_uploadProfilePhoto:(id)arg1 event:(id)arg2;
- (void)_showPhotoUploadView:(id)arg1 event:(id)arg2;
- (void)_tappedUploadButton:(id)arg1 event:(id)arg2;
- (id)fb_segmentShortTitle;
- (id)clonePhotoViewProvider:(id)arg1 cloneViewForPhoto:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4;
- (void)_showPhotoUploadViewIfNecessary;
- (void)_addUploadPhotoButton;
- (void)_createUploadPhotoButton;
- (void)_updatePhotosGridWithUpdatedAlbum;
- (void)startedServerProcessingForUploadedPublication:(id)arg1;
- (void)cannotCancelPublishingOfPublisherData:(id)arg1;
- (void)canCancelPublishingOfPublisherData:(id)arg1;
- (void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2;
- (void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1;
- (void)retriedPublishingPublisherData:(id)arg1;
- (void)publicationProgressedWithProgress:(float)arg1 forPublisherData:(id)arg2;
- (void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2;
- (void)pausedPublishingPublisherData:(id)arg1;
- (void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)cancelledPublishingPublisherData:(id)arg1;
- (void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3;
- (void)attemptedPublicationOfPublisherData:(id)arg1;
- (void)startedPublishingPublisherData:(id)arg1;
- (void)composerFinishedDismissingForCompositionIdentifier:(id)arg1 navigationCoordinator:(id)arg2;
- (void)composerDidSelectContentSuggestion:(id)arg1 withCompositionID:(id)arg2;
- (void)composerDidDismissContentSuggestion:(id)arg1 withCompositionID:(id)arg2;
- (void)composerPublicationProcessStartedForPublisherData:(id)arg1;
- (void)composerStructuredDataUpdated:(id)arg1;
- (void)startShowingPublishingOfPublication:(id)arg1;
- (void)composerCompletedWithResult:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMediaStore:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4;
- (id)initWithMediaContainer:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4;
- (id)initWithMediaContainer:(id)arg1 session:(id)arg2 referrer:(id)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

