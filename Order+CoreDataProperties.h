//
//  Order+CoreDataProperties.h
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Order.h"

NS_ASSUME_NONNULL_BEGIN

@interface Order (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *date;
@property (nullable, nonatomic, retain) NSNumber *made;
@property (nullable, nonatomic, retain) NSNumber *paid;
@property (nullable, nonatomic, retain) NSManagedObject *customer;
@property (nullable, nonatomic, retain) NSSet<RowOrder *> *rowsOfOrder;

@end

@interface Order (CoreDataGeneratedAccessors)

- (void)addRowsOfOrderObject:(RowOrder *)value;
- (void)removeRowsOfOrderObject:(RowOrder *)value;
- (void)addRowsOfOrder:(NSSet<RowOrder *> *)values;
- (void)removeRowsOfOrder:(NSSet<RowOrder *> *)values;

@end

NS_ASSUME_NONNULL_END
