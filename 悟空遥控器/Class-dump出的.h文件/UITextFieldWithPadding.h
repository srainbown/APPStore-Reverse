//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface UITextFieldWithPadding : UITextField
{
    int _paddingLeft;
    int _paddingTop;
    int _paddingRight;
    int _paddingBottom;
    int _cursorTop;
}

@property int cursorTop; // @synthesize cursorTop=_cursorTop;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
@property int paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property int paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property int paddingRight; // @synthesize paddingRight=_paddingRight;
@property int paddingTop; // @synthesize paddingTop=_paddingTop;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

