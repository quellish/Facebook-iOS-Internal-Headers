//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIImage, UIImageView, UIProgressView;

@interface FBPhotoGridCellUploadingStatusOverlay : UIView
{
    BOOL _blackened;
    BOOL _showError;
    NSIndexPath *_indexPath;
    float _progress;
    UIImage *_localImage;
    UIImageView *_errorView;
    UIImageView *_blackOverlay;
    UIImageView *_localImageView;
    UIProgressView *_progressView;
}

+ (id)blackOverlayImage;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *localImageView; // @synthesize localImageView=_localImageView;
@property(retain, nonatomic) UIImageView *blackOverlay; // @synthesize blackOverlay=_blackOverlay;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL showError; // @synthesize showError=_showError;
@property(nonatomic) BOOL blackened; // @synthesize blackened=_blackened;
@property(nonatomic) __weak NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

