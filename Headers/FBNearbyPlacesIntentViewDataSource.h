//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class FBNearbyPlacesHereCardDataSource, FBNearbyPlacesIntentViewModel, NSArray, NSString;
@protocol FBNearbyPlacesCategoryMenuViewCellDelegate><FBNearbyPlacesNearbyCardCollectionCellDelegate><FBNearbyPlacesNearbyLocationCollectionViewCellDelegate><FBNearbyPlacesHugeResultTableViewCellDelegate><UICollectionViewDelegate;

@interface FBNearbyPlacesIntentViewDataSource : NSObject <UITableViewDataSource>
{
    FBNearbyPlacesIntentViewModel *_model;
    FBNearbyPlacesHereCardDataSource *_hereCellDataSource;
    unsigned int _hereCardState;
    id <FBNearbyPlacesCategoryMenuViewCellDelegate><FBNearbyPlacesNearbyCardCollectionCellDelegate><FBNearbyPlacesNearbyLocationCollectionViewCellDelegate><FBNearbyPlacesHugeResultTableViewCellDelegate><UICollectionViewDelegate> _cellDelegate;
    NSArray *_hereCardPhotosDataSources;
}

@property(copy, nonatomic) NSArray *hereCardPhotosDataSources; // @synthesize hereCardPhotosDataSources=_hereCardPhotosDataSources;
@property(nonatomic) __weak id <FBNearbyPlacesCategoryMenuViewCellDelegate><FBNearbyPlacesNearbyCardCollectionCellDelegate><FBNearbyPlacesNearbyLocationCollectionViewCellDelegate><FBNearbyPlacesHugeResultTableViewCellDelegate><UICollectionViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) unsigned int hereCardState; // @synthesize hereCardState=_hereCardState;
- (void).cxx_destruct;
- (BOOL)_useVerticalHereCard;
- (id)_dataSourcesFromModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setupHereCardPhotoDataSources;
- (id)initWithModel:(id)arg1 cellDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

