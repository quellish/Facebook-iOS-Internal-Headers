//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemAttributionEntry, FBRichTextView, UIImageView;
@protocol FBAttributionEntryViewDelegate;

@interface FBAttributionEntryView : UIView
{
    FBMemAttributionEntry *_attributionEntry;
    UIImageView *_sourceIcon;
    FBRichTextView *_attributionLabel;
    id <FBAttributionEntryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAttributionEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_decoratedTextForAttributedString:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_handleLinkTap:(id)arg1 withEvent:(id)arg2;
- (id)initWithAttributionEntry:(id)arg1;

@end

