//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface CSLPillTitleView : UIView
{
    UILabel *_label;
    UIImageView *_arrowView;
    UIView *_pillView;
    NSString *_text;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)pageTitleViewFontSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
