//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBAdInterfacesMapPickerViewControllerDelegate-Protocol.h"

@class NSString;

@interface FBAdInterfacesMapPreviewComponentController : CKComponentController <FBAdInterfacesMapPickerViewControllerDelegate>
{
}

- (void)mapPicker:(id)arg1 didSelectLocation:(id)arg2;
- (void)mapPickerDidCancel:(id)arg1;
- (void)mapPreviewTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

