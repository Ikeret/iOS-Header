//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface RTVehicleEventHistoryMO : NSManagedObject
{
}

+ (id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSDate *locDate; // @dynamic locDate;
@property(retain, nonatomic) NSNumber *locLatitude; // @dynamic locLatitude;
@property(retain, nonatomic) NSNumber *locLongitude; // @dynamic locLongitude;
@property(retain, nonatomic) NSNumber *locUncertainty; // @dynamic locUncertainty;

@end

