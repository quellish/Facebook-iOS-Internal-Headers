//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBDisplayableMedia-Protocol.h"
#import "FBFeedbackTargetProtocol-Protocol.h"
#import "FBMultiResolutionImageSourceProtocol-Protocol.h"
#import "FBPhotoTaggingAssetProtocol-Protocol.h"
#import "FBQueriedEntityFieldsProtocol-Protocol.h"
#import "FBQueriedGoodwillThrowbackAccentImageFieldsProtocol-Protocol.h"
#import "FBQueriedMediaFieldsProtocol-Protocol.h"
#import "FBQueriedNodeFieldsProtocol-Protocol.h"
#import "FBQueriedPlaceQuestionValueFieldsProtocol-Protocol.h"
#import "FBRichStoryEntityMediaProtocol-Protocol.h"
#import "FBSearchPivotsSource-Protocol.h"
#import "FBShareable-Protocol.h"

@class NSString;

@interface FBMemPhoto : FBMemModelObject <FBDisplayableMedia, FBFeedbackTargetProtocol, FBMultiResolutionImageSourceProtocol, FBPhotoTaggingAssetProtocol, FBSearchPivotsSource, FBShareable, FBRichStoryEntityMediaProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedGoodwillThrowbackAccentImageFieldsProtocol, FBQueriedPlaceQuestionValueFieldsProtocol>
{
}

+ (unsigned int)supportedImageFlags;
- (id)accessibilityLabel;
- (id)tagsEdges;
- (id)faceBoxesEdges;
- (id)assetID;
- (void)taggableSourceAvatarWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareableImage;
- (id)shareableImageURL;
- (id)shareableDescription;
- (id)shareableSubtitle;
- (id)shareableTitle;
- (id)shareableType;
- (id)shareableText;
- (id)shareableURL;
- (id)shareableID;
- (id)streamingImageSource;
- (id)imageClosestToFlag:(unsigned int)arg1;
- (float)aspectRatio;
- (id)place;
- (BOOL)isFullInfoLoaded;
- (id)accessibilityLabelStringIncludingCaption:(BOOL)arg1;
- (id)accessibilityLabelString;
- (id)supportedImageURLs;
- (id)tagsArray;
- (id)faceBoxesArray;
- (id)fbid;
- (struct CGSize)size;
- (struct CGPoint)focusPoint;
- (BOOL)isDisplayable;
- (unsigned int)imageFlagClosestToSize:(float)arg1;
- (unsigned int)imageFlagClosestToFlag:(unsigned int)arg1;
- (struct CGSize)imageSizeForFlag:(unsigned int)arg1;
- (id)imageSourceForFlag:(unsigned int)arg1 skipCheckingStreamImage:(BOOL)arg2;
- (id)imageSourceForFlag:(unsigned int)arg1;
- (id)imageForFlag:(unsigned int)arg1;
- (id)entityURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

