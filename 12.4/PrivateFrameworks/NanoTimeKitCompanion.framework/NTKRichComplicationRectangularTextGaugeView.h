//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationLineProgressView, UIImageView;

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularBaseView
{
    UIImageView *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_line1Label;
    NTKRichComplicationLineProgressView *_progressView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

