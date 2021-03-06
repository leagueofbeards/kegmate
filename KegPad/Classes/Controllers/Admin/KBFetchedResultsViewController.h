//
//  KBFetchedResultsViewController.h
//  KegPad
//
//  Created by Gabriel Handford on 8/9/10.
//  Copyright 2010 Yelp. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

@interface KBFetchedResultsViewController : UITableViewController <UITableViewDataSource, NSFetchedResultsControllerDelegate> {
  NSFetchedResultsController *fetchedResultsController_;
}

/*!
 @result Fetched results controller. If this is the first time called, it will call loadFetchedResultsController.
 */
- (NSFetchedResultsController *)fetchedResultsController;

// Abstract
- (NSFetchedResultsController *)loadFetchedResultsController;

// Abstract
- (UITableViewCell *)cell:(UITableViewCell *)cell forObject:(id)obj;

// Abstract
- (void)deleteObject:(id)obj;

// Abstract
- (void)insertAtIndexPath:(NSIndexPath *)indexPath;

@end
