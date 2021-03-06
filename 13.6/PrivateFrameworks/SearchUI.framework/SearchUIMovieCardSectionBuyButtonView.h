//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class SFPunchout, SearchUILabel, SearchUIMovieCardSectionView, SearchUIOfferButtonView;

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView
{
    SearchUILabel *_subtitleLabel;
    SearchUIOfferButtonView *_button;
    SFPunchout *_punchout;
    SearchUIMovieCardSectionView *_cardSectionView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SearchUIMovieCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) SearchUIOfferButtonView *button; // @synthesize button=_button;
@property(retain, nonatomic) SearchUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonPressed;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4;

@end

