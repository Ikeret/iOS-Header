//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait
{
    unsigned long long _value;
    unsigned long long _forbiddenValue;
}

@property(readonly, nonatomic) unsigned long long forbiddenValue; // @synthesize forbiddenValue=_forbiddenValue;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (_Bool)isActive;
- (id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2;
- (id)initWithPartOfDay:(unsigned long long)arg1;

@end

