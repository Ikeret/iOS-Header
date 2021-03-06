//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKActivitySummaryDataProviderObserver-Protocol.h>
#import <HealthUI/HKDateRangeDataSourceDelegate-Protocol.h>

@class HKActivitySummaryDataProvider, HKDisplayTypeController, HKUnitPreferenceController, NSCalendar, NSString;
@protocol HKDateRangeDataUpdateDelegate;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate, HKActivitySummaryDataProviderObserver>
{
    HKActivitySummaryDataProvider *_dataProvider;
    long long _activityValue;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitPreferenceController;
    id <HKDateRangeDataUpdateDelegate> _updateDelegate;
    NSCalendar *_currentCalendar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
@property(nonatomic) __weak id <HKDateRangeDataUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
@property(readonly, nonatomic) HKActivitySummaryDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(_Bool)arg8;
- (id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2;
- (id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3;
- (id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

