//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponent.h"

@class FBFriendableCellTitleComponent;

@interface FBRequestTabFriendListCellContentComponent : CKComponent
{
    FBFriendableCellTitleComponent *_titleComponent;
    CKComponent *_messageButtonComponent;
    CKComponent *_overflowButtonComponent;
}

+ (id)newWithTitle:(id)arg1 subtext:(id)arg2 messageButtonComponent:(id)arg3 overflowButtonComponent:(id)arg4 maximumNumberOfLinesInTitle:(unsigned int)arg5 maximumNumberOfLinesInSubtitle:(unsigned int)arg6;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

