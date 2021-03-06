//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HKHeartRhythmAvailabilityObserver-Protocol.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, HKHeartRhythmAvailability, HRImageLabel, UILabel, UIView;

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HROnboardingBaseViewController <HKHeartRhythmAvailabilityObserver>
{
    _Bool _electrocardiogramFirstRecordingCompleted;
    _Bool _didStepForward;
    HKHeartRhythmAvailability *_availability;
    HKAnchoredObjectQuery *_electrocardiogramQuery;
    HKElectrocardiogram *_electrocardiogram;
    UIView *_assetView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HRImageLabel *_recordingStep1ImageLabel;
    HRImageLabel *_recordingStep2ImageLabel;
    UILabel *_wristSettingsLabel;
}

@property(retain, nonatomic) UILabel *wristSettingsLabel; // @synthesize wristSettingsLabel=_wristSettingsLabel;
@property(retain, nonatomic) HRImageLabel *recordingStep2ImageLabel; // @synthesize recordingStep2ImageLabel=_recordingStep2ImageLabel;
@property(retain, nonatomic) HRImageLabel *recordingStep1ImageLabel; // @synthesize recordingStep1ImageLabel=_recordingStep1ImageLabel;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) _Bool didStepForward; // @synthesize didStepForward=_didStepForward;
@property(nonatomic) _Bool electrocardiogramFirstRecordingCompleted; // @synthesize electrocardiogramFirstRecordingCompleted=_electrocardiogramFirstRecordingCompleted;
@property(retain, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
@property(retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery; // @synthesize electrocardiogramQuery=_electrocardiogramQuery;
@property(retain, nonatomic) HKHeartRhythmAvailability *availability; // @synthesize availability=_availability;
- (void).cxx_destruct;
- (id)_recordingStepFont;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (void)_stopElectrocardiogramQuery;
- (void)_setUpElectrocardiogramQuery;
- (void)_stepForwardWithElectrocardiogramRecorded:(_Bool)arg1;
- (struct CGSize)_takeRecordingImageDimension;
- (id)_titleForOnboarding:(_Bool)arg1;
- (void)heartRhythmAvailabilityDidUpdate;
- (void)skipButtonTapped:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initForOnboarding:(_Bool)arg1;

@end

