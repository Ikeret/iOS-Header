//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKActivitySummaryDataProviderObserver-Protocol.h>
#import <HealthToolbox/HKValueDataProviderObserver-Protocol.h>
#import <HealthToolbox/WDDashboardCellChartSource-Protocol.h>
#import <HealthToolbox/WDDashboardCellPrimaryValueSource-Protocol.h>
#import <HealthToolbox/WDDashboardCellSecondaryValueSource-Protocol.h>

@class HKActivitySummaryDataProvider, HKDisplayCategory, HKDisplayType, HKUnitPreferenceController, HKValueDataProvider, NSAttributedString, NSDate, NSDictionary, NSString, WDProfile;
@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;

__attribute__((visibility("hidden")))
@interface WDDashboardChartItem : NSObject <HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource>
{
    NSDictionary *_dataPoints;
    _Bool _isActive;
    HKUnitPreferenceController *_unitController;
    WDProfile *_profile;
    HKValueDataProvider *_currentValueDataProvider;
    HKValueDataProvider *_secondaryValueDataProvider;
    HKActivitySummaryDataProvider *_activitySummaryProvider;
    _Bool _localeDidChange;
    HKDisplayType *_displayType;
    id <WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;
    id <WDDashboardCellSecondaryValueSourceDelegate> _secondaryValueSourceDelegate;
    HKDisplayCategory *_displayCategory;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _timeScope;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool localeDidChange; // @synthesize localeDidChange=_localeDidChange;
@property(readonly, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider; // @synthesize activitySummaryProvider=_activitySummaryProvider;
@property(readonly, nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) HKDisplayCategory *displayCategory; // @synthesize displayCategory=_displayCategory;
@property(nonatomic) __weak id <WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate; // @synthesize secondaryValueSourceDelegate=_secondaryValueSourceDelegate;
@property(nonatomic) __weak id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate; // @synthesize primaryValueSourceDelegate=_primaryValueSourceDelegate;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (struct UIEdgeInsets)_chartInsetsForTimeScope:(long long)arg1;
- (void)dataProviderDidUpdateValues:(id)arg1;
- (_Bool)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1;
- (_Bool)shouldHideAverageLineForTimeScope:(long long)arg1;
@property(readonly, nonatomic) NSAttributedString *secondaryValue;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSString *primaryValueContextualText;
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;
- (void)invalidateChart;
- (void)dealloc;
- (id)init;
- (id)initWithDisplayType:(id)arg1 useAlternateCurrentValue:(_Bool)arg2 displayCategory:(id)arg3 profile:(id)arg4 healthStore:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

