//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSLayoutManager, NSTextContainer, UIFont;

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (void)layoutManager:(NSLayoutManager *)arg1 textContainer:(NSTextContainer *)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(BOOL)arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;
- (struct CGRect)layoutManager:(NSLayoutManager *)arg1 boundingBoxForControlGlyphAtIndex:(unsigned int)arg2 forTextContainer:(NSTextContainer *)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned int)arg6;
- (BOOL)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned int)arg2;
- (BOOL)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned int)arg2;
- (int)layoutManager:(NSLayoutManager *)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned int)arg3;
- (float)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (float)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (float)layoutManager:(NSLayoutManager *)arg1 lineSpacingAfterGlyphAtIndex:(unsigned int)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (unsigned int)layoutManager:(NSLayoutManager *)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const int *)arg3 characterIndexes:(const unsigned int *)arg4 font:(UIFont *)arg5 forGlyphRange:(struct _NSRange)arg6;
@end

