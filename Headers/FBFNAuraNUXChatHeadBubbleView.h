//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBFNAuraNUXBubbleView, FBFNAuraNUXChatHeadView, FBUserSession, NSString;

@interface FBFNAuraNUXChatHeadBubbleView : UIView
{
    unsigned int _style;
    FBFNAuraNUXChatHeadView *_chatHeadView;
    FBFNAuraNUXBubbleView *_bubbleView;
    FBUserSession *_session;
}

@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBFNAuraNUXBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) FBFNAuraNUXChatHeadView *chatHeadView; // @synthesize chatHeadView=_chatHeadView;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *profilePhotoURL;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(unsigned int)arg1 text:(id)arg2 session:(id)arg3;

@end

